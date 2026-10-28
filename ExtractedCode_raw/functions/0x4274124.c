// rea decompile_all
// name: CakeOrder.RemoteConfigDefaultSetterCakeOrder$$SelectOverrideAuthor
// address: 0x4274124
// body: available
// range: 0x4274124-0x427433b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4274334 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4274338 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 CakeOrder_RemoteConfigDefaultSetterCakeOrder__SelectOverrideAuthor(undefined8 param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  if ((DAT_0951704e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09189e78);
    FUN_03f5c2a4(&DAT_09212350);
    FUN_03f5c2a4(&DAT_0921a3f8);
    FUN_03f5c2a4(&DAT_091f7b58);
    DAT_0951704e = 1;
  }
  uVar1 = System_String__Equals(DAT_0921a3f8,param_1,5,0);
  if ((uVar1 & 1) == 0) {
    if (*(int *)(DAT_09189e78 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar5 = **(long **)(DAT_09189e78 + 0xb8);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
      uVar1 = 0;
      uVar4 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
      do {
        if (uVar4 <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        uVar3 = *(undefined8 *)(lVar5 + 0x20 + uVar1 * 8);
        uVar4 = System_String__Equals(uVar3,param_1,5,0);
        if ((uVar4 & 1) != 0) {
          if (*(int *)(DAT_09189e78 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (DAT_0951713e == '\0') {
            FUN_03f5c2a4(&DAT_09189e78);
            DAT_0951713e = '\x01';
          }
          if (*(int *)(DAT_09189e78 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          puVar2 = (undefined8 *)(*(long *)(DAT_09189e78 + 0xb8) + 0x10);
          *puVar2 = uVar3;
          goto LAB_04274318;
        }
        uVar4 = (ulong)*(uint *)(lVar5 + 0x18);
        uVar1 = uVar1 + 1;
      } while ((long)uVar1 < (long)(int)*(uint *)(lVar5 + 0x18));
    }
    uVar3 = System_String__Concat(DAT_09212350,param_1,DAT_091f7b58,0);
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091835d0);
    }
    UnityEngine_Debug__LogError(uVar3,0);
    uVar3 = 0;
  }
  else {
    if (*(int *)(DAT_09189e78 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = DAT_0921a3f8;
    if (DAT_0951713e == '\0') {
      FUN_03f5c2a4(&DAT_09189e78);
      DAT_0951713e = '\x01';
    }
    if (*(int *)(DAT_09189e78 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar2 = (undefined8 *)(*(long *)(DAT_09189e78 + 0xb8) + 0x10);
    *puVar2 = uVar3;
LAB_04274318:
    thunk_FUN_03f5d7b8(puVar2,uVar3);
    uVar3 = 1;
  }
  return uVar3;
}

