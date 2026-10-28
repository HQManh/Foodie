// rea decompile_all
// name: _GAME.Utils.SaveFile$$Encrypt
// address: 0x7747110
// body: available
// range: 0x7747110-0x7747267 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x774725c to 0x752856c System.Convert$$ToBase64String (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7747260 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7747264 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _GAME_Utils_SaveFile__Encrypt(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  if ((DAT_09522b2a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091814b0);
    FUN_03f5c2a4(&DAT_09182b88);
    DAT_09522b2a = 1;
  }
  uVar5 = System_String__IsNullOrEmpty(param_1,0);
  if ((uVar5 & 1) != 0) {
    return param_1;
  }
  plVar6 = (long *)System_Text_Encoding__get_UTF8(0);
  if (plVar6 != (long *)0x0) {
    lVar7 = (**(code **)(*plVar6 + 600))(plVar6,param_1,*(undefined8 *)(*plVar6 + 0x260));
    plVar6 = (long *)System_Text_Encoding__get_UTF8(0);
    if (*(int *)(DAT_091814b0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091814b0);
    }
    uVar8 = UnityEngine_Application__get_identifier(0);
    if (plVar6 != (long *)0x0) {
      lVar9 = (**(code **)(*plVar6 + 600))(plVar6,uVar8,*(undefined8 *)(*plVar6 + 0x260));
      if (lVar7 != 0) {
        uVar1 = *(uint *)(lVar7 + 0x18);
        if (0 < (long)(int)uVar1) {
          uVar5 = 0;
          do {
            if (uVar1 <= uVar5) {
LAB_07747260:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            if (lVar9 == 0) goto LAB_07747264;
            uVar2 = *(uint *)(lVar9 + 0x18);
            iVar4 = 0;
            if (uVar2 != 0) {
              iVar4 = (int)uVar5 / (int)uVar2;
            }
            uVar3 = (int)uVar5 - iVar4 * uVar2;
            if (uVar2 <= uVar3) goto LAB_07747260;
            *(byte *)(lVar7 + 0x20 + uVar5) =
                 *(byte *)(lVar9 + (int)uVar3 + 0x20) ^ *(byte *)(lVar7 + 0x20 + uVar5);
            uVar5 = uVar5 + 1;
          } while ((long)uVar5 < (long)(int)uVar1);
        }
        if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar8 = System_Convert__ToBase64String(lVar7,0);
        return uVar8;
      }
    }
  }
LAB_07747264:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

