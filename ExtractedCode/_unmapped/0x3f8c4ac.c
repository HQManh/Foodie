// rea decompile_all
// name: FUN_03f8c4ac
// address: 0x3f8c4ac
// body: available
// range: 0x3f8c4ac-0x3f8c5bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_03f8c4ac(long *param_1,uint param_2,undefined4 param_3,int *param_4,undefined4 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  void *__ptr;
  undefined8 uVar3;
  undefined4 *puVar4;
  ulong uVar5;
  undefined2 *puVar6;
  short *psVar7;
  int *piVar8;
  long lVar9;
  undefined2 uVar10;
  
  __ptr = calloc((long)(int)param_2,8);
  if (0 < (int)param_2) {
    uVar5 = (ulong)param_2;
    puVar4 = (undefined4 *)(*param_1 + 8);
    puVar6 = (undefined2 *)((long)__ptr + 6);
    do {
      lVar9 = *(long *)(puVar4 + -2);
      if (lVar9 == -1) {
        uVar10 = 0;
        lVar9 = 0xffffffff;
      }
      else {
        uVar10 = (undefined2)*puVar4;
      }
      uVar5 = uVar5 - 1;
      puVar4 = puVar4 + 4;
      *(int *)(puVar6 + -3) = (int)lVar9;
      puVar6[-1] = uVar10;
      *puVar6 = 0;
      puVar6 = puVar6 + 4;
    } while (uVar5 != 0);
  }
  iVar1 = FUN_03f89b94(__ptr,param_2,param_3);
  *param_4 = iVar1;
  if (iVar1 == -1) {
    free(__ptr);
    puVar4 = (undefined4 *)__errno();
    uVar2 = FUN_03f897e0(*puVar4);
    uVar3 = 0xfffffffd;
    *param_5 = uVar2;
  }
  else {
    if ((iVar1 != 0) && (0 < (int)param_2)) {
      uVar5 = (ulong)param_2;
      psVar7 = (short *)((long)__ptr + 6);
      piVar8 = (int *)(*param_1 + 0xc);
      do {
        uVar5 = uVar5 - 1;
        *piVar8 = (int)*psVar7;
        psVar7 = psVar7 + 4;
        piVar8 = piVar8 + 4;
      } while (uVar5 != 0);
    }
    free(__ptr);
    uVar3 = 0;
  }
  return uVar3;
}

