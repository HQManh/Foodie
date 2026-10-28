// rea decompile_all
// name: Lean.Touch.LeanSelectableByFinger$$SelectSelf
// address: 0x734eea4
// body: available
// range: 0x734eea4-0x734f067 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x734f064 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Lean_Touch_LeanSelectableByFinger__SelectSelf(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 local_30;
  long lStack_28;
  
  if ((DAT_09520753 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b3230);
    FUN_03f5c2a4(&DAT_091be070);
    FUN_03f5c2a4(&DAT_091be1c0);
    DAT_09520753 = 1;
  }
  local_30 = 0;
  lStack_28 = 0;
  if (*(char *)(param_1 + 0x28) == '\0') {
    Lean_Common_LeanSelectable__set_SelfSelected(param_1,1,0);
    if (param_2 == 0) goto LAB_0734f064;
    if ((*(char *)(param_2 + 0x18) != '\0') || (*(char *)(param_2 + 0x19) == '\0')) {
      lVar5 = *(long *)(param_1 + 0x68);
      local_30 = 0;
      lStack_28 = param_2;
      thunk_FUN_03f5d7b8(&lStack_28,param_2);
      local_30 = 0;
      thunk_FUN_03f5d7b8(&local_30,0);
      lVar2 = DAT_091b3230;
      if (lVar5 == 0) {
LAB_0734f064:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar4 = *(long *)(lVar5 + 0x10);
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar4 == 0) goto LAB_0734f064;
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
        lVar4 = lVar4 + (long)(int)uVar1 * 0x10;
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        puVar3 = (undefined8 *)(lVar4 + 0x20);
        *puVar3 = local_30;
        *(long *)(lVar4 + 0x28) = lStack_28;
        thunk_FUN_03f5d7b8(puVar3,0);
      }
      else {
        FUN_05959650(lVar5,local_30,lStack_28,
                     *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
    }
    if (*(long *)(param_1 + 0x48) != 0) {
      FUN_0647fad4(*(long *)(param_1 + 0x48),param_2,DAT_091be070);
    }
    if (((*(char *)(param_2 + 0x18) == '\0') && (*(char *)(param_2 + 0x19) != '\0')) &&
       (*(long *)(param_1 + 0x50) != 0)) {
      FUN_0647fad4(*(long *)(param_1 + 0x50),param_2,DAT_091be070);
    }
    if (*(long *)(param_1 + 0x58) != 0) {
      FUN_06481f2c(*(long *)(param_1 + 0x58),0,param_2,DAT_091be1c0);
    }
    if (((*(char *)(param_2 + 0x18) == '\0') && (*(char *)(param_2 + 0x19) != '\0')) &&
       (*(long *)(param_1 + 0x60) != 0)) {
      FUN_06481f2c(*(long *)(param_1 + 0x60),0,param_2,DAT_091be1c0);
    }
  }
  return;
}

