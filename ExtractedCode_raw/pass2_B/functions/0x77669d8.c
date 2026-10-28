// rea decompile_all
// name: _GAME.Bridge.R1UserTextSupport$$AddToGlobalFallback
// address: 0x77669d8
// body: available
// range: 0x77669d8-0x7766b6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7766b44 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7766b64 to 0x57e0c68 FUN_057e0c68 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7766b68 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Bridge_R1UserTextSupport__AddToGlobalFallback(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  
  if ((DAT_09522c71 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b09c0);
    FUN_03f5c2a4(&DAT_091b09d0);
    FUN_03f5c2a4(&DAT_09189998);
    FUN_03f5c2a4(&DAT_0918b7d0);
    DAT_09522c71 = 1;
  }
  if (*(int *)(DAT_0918b7d0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar2 = TMPro_TMP_Settings__get_fallbackFontAssets(0);
  if ((lVar2 != 0) &&
     (uVar3 = FUN_057e1004(lVar2,param_1,DAT_091b09d0), lVar6 = DAT_091b09c0, (uVar3 & 1) == 0)) {
    lVar5 = *(long *)(lVar2 + 0x10);
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    if (lVar5 != 0) {
      uVar1 = *(uint *)(lVar2 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(lVar2 + 0x18) = uVar1 + 1;
        puVar4 = (undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
        *puVar4 = param_1;
        thunk_FUN_03f5d7b8(puVar4,param_1);
      }
      else {
        FUN_057e0c68(lVar2,param_1,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70)
                    );
      }
      if (*(int *)(DAT_09189998 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar2 = DAT_091b09c0;
      lVar6 = *(long *)(*(long *)(DAT_09189998 + 0xb8) + 0x18);
      if (lVar6 != 0) {
        lVar5 = *(long *)(lVar6 + 0x10);
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar5 != 0) {
          uVar1 = *(uint *)(lVar6 + 0x18);
          if (uVar1 < *(uint *)(lVar5 + 0x18)) {
            *(uint *)(lVar6 + 0x18) = uVar1 + 1;
            puVar4 = (undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
            *puVar4 = param_1;
            thunk_FUN_03f5d7b8(puVar4,param_1);
            return;
          }
          FUN_057e0c68(lVar6,param_1,
                       *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  return;
}

