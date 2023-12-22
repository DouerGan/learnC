#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

#define MAX_DATA 512
#define MAX_ROW 100

struct Address {
    int id;
    int set;
    char name[MAX_DATA];
    char email[MAX_DATA];
};

struct Database {
    struct Address rows[MAX_ROW];
};

struct Connection {
    FILE* file;
    struct Database* db;
};

void die(const char* message)
{
    if(errno){
        perror(message);
    } else {
        printf("APPLICATION ERROR: %s. \n",message);
    }
    exit(1);
}

void Address_print(struct Address* addr)
{
    printf("%d %s %s\n",addr->id,addr->name,addr->email);
}

void Database_load(struct Connection* conn)
{
    int rc = fread(conn->db,sizeof(struct Database),1,conn->file);
    if(rc != 1) die("Failed to load database.\n");
}

struct Connection* Database_open(const char *filename,char mode)
{
    struct Connection* conn = malloc(sizeof(struct Connection));
    if(conn == NULL) die("MEMORY ERROR");

    conn->db = malloc(sizeof(struct Database));
    if(conn->db == NULL) die("MEMORY ERROR");

    if(mode == 'c'){
        conn->file = fopen(filename,"w");
    }else {
        conn->file = fopen(filename,"r+");

        if(conn->file) {
            Database_load(conn);
        }

    }
    if(conn->file == NULL) die("Failed to open the file");
    return conn;
}

void Database_close(struct Connection *conn)
{
    if(conn){
        if(conn->file) fclose(conn->file);
        if(conn->db) free(conn->db);
        free(conn);
    }
}

void Database_write(struct Connection *conn)
{
    rewind(conn->file); //将指针移动到文件开头

    int rc = fwrite(conn->db,sizeof(struct Database),1,conn->file);
    if(rc != 1) die("Failed to load database");

    rc = fflush(conn->file);
    if(rc == -1) die()
}
