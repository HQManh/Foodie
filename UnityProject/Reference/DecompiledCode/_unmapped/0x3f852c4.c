// rea decompile_all
// name: SystemNative_ReadDirR
// address: 0x3f852c4
// body: available
// range: 0x3f852c4-0x3f853ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int SystemNative_ReadDirR
              (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  dirent *pdVar5;
  void *pvVar6;
  DIR *pDVar7;
  char *pcVar8;
  long lVar9;
  size_t __nmemb;
  ulong uVar10;
  undefined8 uVar11;
  
  piVar4 = (int *)__errno();
  lVar9 = param_1[1];
  *piVar4 = 0;
  if (lVar9 == 0) {
    __nmemb = 0xffffffffffffffff;
    do {
      pdVar5 = readdir((DIR *)*param_1);
      __nmemb = __nmemb + 1;
    } while (pdVar5 != (dirent *)0x0);
    if (__nmemb != 0) {
      pvVar6 = calloc(__nmemb,0x10);
      param_1[1] = pvVar6;
      param_1[2] = 0;
      closedir((DIR *)*param_1);
      pDVar7 = opendir((char *)param_1[4]);
      *param_1 = pDVar7;
      pdVar5 = readdir(pDVar7);
      if (pdVar5 == (dirent *)0x0) {
        uVar10 = 0;
      }
      else {
        lVar9 = 0;
        uVar10 = 0;
        do {
          puVar1 = (undefined8 *)(param_1[1] + lVar9);
          pcVar8 = strdup(pdVar5->d_name);
          bVar2 = pdVar5->d_type;
          *puVar1 = pcVar8;
          uVar10 = uVar10 + 1;
          pDVar7 = (DIR *)*param_1;
          *(undefined4 *)(puVar1 + 1) = 0xffffffff;
          *(uint *)((long)puVar1 + 0xc) = (uint)bVar2;
          pdVar5 = readdir(pDVar7);
          if (pdVar5 == (dirent *)0x0) break;
          lVar9 = lVar9 + 0x10;
        } while (uVar10 < __nmemb);
      }
      qsort((void *)param_1[1],__nmemb,0x10,(__compar_fn_t)&UNK_03f85400);
      param_1[3] = uVar10;
    }
  }
  if ((ulong)param_1[2] < (ulong)param_1[3]) {
    iVar3 = 0;
    puVar1 = (undefined8 *)(param_1[1] + param_1[2] * 0x10);
    uVar11 = *puVar1;
    param_4[1] = puVar1[1];
    *param_4 = uVar11;
    param_1[2] = param_1[2] + 1;
  }
  else {
    *param_4 = 0;
    param_4[1] = 0;
    iVar3 = *piVar4;
    if (iVar3 == 0) {
      iVar3 = -1;
    }
  }
  return iVar3;
}

