// rea decompile_all
// name: AppsFlyerSDK.AppsFlyer.<validateAndLogInAppPurchase>d__96$$MoveNext
// address: 0x4067864
// body: available
// range: 0x4067864-0x4067ac3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4067abc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4067ac0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AppsFlyerSDK_AppsFlyer_<validateAndLogInAppPurchase>d__96__MoveNext(int *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  undefined8 local_28;
  
  if ((DAT_09515bf5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091814e8);
    FUN_03f5c2a4(&DAT_0919a348);
    FUN_03f5c2a4(&DAT_0919a370);
    FUN_03f5c2a4(&DAT_0919a460);
    FUN_03f5c2a4(&DAT_0919a5f0);
    FUN_03f5c2a4(&DAT_0919a5f8);
    FUN_03f5c2a4(&DAT_0919fb58);
    FUN_03f5c2a4(&DAT_0919fbc8);
    FUN_03f5c2a4(&DAT_09176b80);
    FUN_03f5c2a4(&DAT_09185290);
    FUN_03f5c2a4(&DAT_09217230);
    DAT_09515bf5 = 1;
  }
  local_28 = 0;
  if (*param_1 == 0) {
    local_28 = *(undefined8 *)(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
    goto LAB_04067a40;
  }
  plVar6 = *(long **)(param_1 + 6);
  if (plVar6 == (long *)0x0) {
LAB_040679a4:
    lVar3 = thunk_FUN_03f9944c(DAT_09176b80);
    FUN_06fd76bc(lVar3,DAT_0919fb58);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  else {
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_09185290) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_04067990;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185290,0);
LAB_04067990:
    lVar3 = (*(code *)*puVar1)(plVar6,puVar1[1]);
    if (lVar3 == 0) goto LAB_040679a4;
  }
  FUN_06fd8440(lVar3,DAT_09217230,*(undefined8 *)(param_1 + 8),DAT_0919fbc8);
  if (*(int *)(DAT_091814e8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar3 = AppsFlyerSDK_AppsFlyer__QueryValidateAndLogAsync(lVar3);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  local_28 = FUN_06b4365c(lVar3,DAT_0919a460);
  uVar4 = FUN_06b64800(&local_28,DAT_0919a5f8);
  if ((uVar4 & 1) == 0) {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 10) = local_28;
    thunk_FUN_03f5d7b8(param_1 + 10,0);
    FUN_040784ec(param_1 + 2,&local_28,param_1,DAT_0919a348);
    return;
  }
LAB_04067a40:
  uVar2 = FUN_06b64824(&local_28,DAT_0919a5f0);
  *param_1 = -2;
  FUN_06b426d4(param_1 + 2,uVar2,DAT_0919a370);
  return;
}

