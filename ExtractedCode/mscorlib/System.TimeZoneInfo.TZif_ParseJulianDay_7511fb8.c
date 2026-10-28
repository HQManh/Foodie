// rea decompile_all
// name: System.TimeZoneInfo$$TZif_ParseJulianDay
// address: 0x7511fb8
// body: available
// range: 0x7511fb8-0x7512197 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x751218c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7512190 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7512194 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_TimeZoneInfo__TZif_ParseJulianDay(long param_1,uint *param_2,int *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  
  if ((DAT_095216e9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184eb8);
    DAT_095216e9 = 1;
  }
  *param_3 = 0;
  *param_2 = 0;
  if (param_1 == 0) {
LAB_07512190:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if ((1 < *(int *)(param_1 + 0x10)) &&
     (uVar1 = System_String__get_Chars(param_1,1,0), 0xfffffff5 < (uVar1 & 0xffff) - 0x3a)) {
    iVar8 = 0;
    iVar7 = 2;
    do {
      uVar1 = System_String__get_Chars(param_1,iVar7 + -1,0);
      iVar8 = iVar8 * 10 + (uVar1 & 0xffff) + -0x30;
      if (*(int *)(param_1 + 0x10) <= iVar7) break;
      uVar1 = System_String__get_Chars(param_1,iVar7,0);
      iVar7 = iVar7 + 1;
    } while (0xfffffff5 < (uVar1 & 0xffff) - 0x3a);
    if (*(int *)(DAT_09184eb8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (iVar8 != 0) {
      lVar4 = **(long **)(DAT_09184eb8 + 0xb8);
      if (lVar4 != 0) {
        uVar1 = (uint)*(long *)(lVar4 + 0x18);
        if (uVar1 != 0) {
          if (*(int *)(lVar4 + ((*(long *)(lVar4 + 0x18) << 0x20) + -0x100000000 >> 0x1e) + 0x20) <
              iVar8) goto LAB_07512148;
          if ((int)uVar1 < 2) {
            uVar5 = 1;
          }
          else {
            lVar6 = 0;
            do {
              if (iVar8 <= *(int *)(lVar4 + 0x24 + lVar6 * 4)) {
                uVar5 = (int)lVar6 + 1;
                break;
              }
              lVar6 = lVar6 + 1;
              uVar5 = uVar1;
            } while (uVar1 - 1 != (int)lVar6);
          }
          *param_2 = uVar5;
          if ((uint)((long)(int)uVar5 + -1) < uVar1) {
            *param_3 = iVar8 - *(int *)(lVar4 + ((long)(int)uVar5 + -1) * 4 + 0x20);
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      goto LAB_07512190;
    }
  }
LAB_07512148:
  thunk_FUN_03fc39d4(&DAT_09187130);
  uVar2 = thunk_FUN_03f9944c();
  uVar3 = thunk_FUN_03fc39d4(&DAT_09205278);
  System_InvalidTimeZoneException___ctor(uVar2,uVar3,0);
  uVar3 = thunk_FUN_03fc39d4(&DAT_091db768);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar2,uVar3);
}

