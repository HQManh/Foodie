// rea decompile_all
// name: System.Diagnostics.StackFrame$$get_frame_info
// address: 0x754e7c8
// body: available
// range: 0x754e7c8-0x754e7cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool System_Diagnostics_StackFrame__get_frame_info
               (int param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4,
               undefined8 param_5,undefined8 *param_6,undefined4 *param_7)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  char *__s1;
  long lVar9;
  uint uVar10;
  
  plVar6 = (long *)FUN_03fbda38();
  plVar2 = (long *)*plVar6;
  plVar3 = (long *)plVar6[1];
  uVar10 = param_1 - 2;
  plVar6 = plVar2;
  if (plVar2 != plVar3) {
    do {
      lVar9 = *(long *)(*plVar6 + 0x20);
      iVar5 = strcmp(*(char **)(lVar9 + 0x18),"System.Diagnostics");
      plVar4 = plVar2;
      if ((iVar5 == 0) && (iVar5 = strcmp(*(char **)(lVar9 + 0x10),"StackTrace"), iVar5 == 0)) {
        uVar10 = param_1 - 4;
        break;
      }
      plVar6 = plVar6 + 4;
    } while (plVar6 != plVar3);
    for (; plVar4 != plVar3; plVar4 = plVar4 + 4) {
      lVar9 = *(long *)(*plVar4 + 0x20);
      iVar5 = strcmp(*(char **)(lVar9 + 0x18),"System.Diagnostics");
      if (iVar5 == 0) {
        __s1 = *(char **)(lVar9 + 0x10);
        iVar5 = strcmp(__s1,"StackFrame");
        if (iVar5 == 0) {
          uVar10 = uVar10 + 1;
        }
        else {
          iVar5 = strcmp(__s1,"StackTrace");
          if (iVar5 == 0) {
            uVar10 = uVar10 + 1;
          }
        }
      }
    }
  }
  uVar8 = (long)plVar3 - (long)plVar2 >> 5;
  uVar1 = (ulong)(int)~uVar10;
  lVar9 = uVar8 + uVar1;
  if (-1 < lVar9 && CARRY8(uVar8,uVar1)) {
    plVar2 = plVar2 + lVar9 * 4;
    uVar7 = FUN_03f9adc4(*plVar2,*(undefined8 *)(*plVar2 + 0x20));
    *param_3 = uVar7;
    FUN_03f5d7b8(param_3);
    if (((char *)plVar2[3] != (char *)0x0) && (*(char *)plVar2[3] != '\0')) {
      *param_7 = (int)plVar2[2];
      *param_4 = *(undefined4 *)((long)plVar2 + 0x14);
      uVar7 = FUN_03f967b4();
      *param_6 = uVar7;
      FUN_03f5d7b8(param_6);
    }
  }
  return -1 < lVar9 && CARRY8(uVar8,uVar1);
}

