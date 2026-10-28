// rea decompile_all
// name: System.DateTimeParse$$HandleTimeZone
// address: 0x75a2ba8
// body: available
// range: 0x75a2ba8-0x75a2d2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75a2cac to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_DateTimeParse__HandleTimeZone(long *param_1,long param_2)

{
  short sVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  
  if ((DAT_09521c3a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835a8);
    FUN_03f5c2a4(&DAT_0918db18);
    DAT_09521c3a = 1;
  }
  lVar2 = param_1[2];
  if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar3 = System___DTString__get_Length(param_1,0);
  if (iVar3 + -1 <= (int)lVar2) {
    return 1;
  }
  uVar6 = *(uint *)(param_1 + 2);
  if (uVar6 < *(uint *)(param_1 + 1)) {
    iVar3 = 0;
    do {
      sVar1 = *(short *)(*param_1 + (long)(int)uVar6 * 2);
      if (*(int *)(DAT_09535460 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = System_Char__IsWhiteSpace(sVar1,0);
      if ((uVar5 & 1) == 0) {
LAB_075a2cb0:
        if ((sVar1 != 0x2d) && (sVar1 != 0x2b)) {
          return 1;
        }
        *(int *)(param_1 + 2) = (int)param_1[2] + iVar3;
        if ((*(uint *)(param_2 + 0x24) >> 8 & 1) == 0) {
          *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) | 0x100;
          if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar5 = System_DateTimeParse__ParseTimeZone(param_1,param_2 + 0x28);
          if ((uVar5 & 1) != 0) {
            return 1;
          }
        }
        System_DateTimeResult__SetBadDateTimeFailure(param_2,0);
        return 0;
      }
      lVar2 = param_1[2];
      if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar4 = System___DTString__get_Length(param_1,0);
      if (iVar4 + -1 <= iVar3 + (int)lVar2) goto LAB_075a2cb0;
      iVar3 = iVar3 + 1;
      uVar6 = (int)param_1[2] + iVar3;
    } while (uVar6 < *(uint *)(param_1 + 1));
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

