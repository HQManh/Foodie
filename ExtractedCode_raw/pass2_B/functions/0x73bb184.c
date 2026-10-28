// rea decompile_all
// name: MessagePack.Internal.ILGeneratorExtensions$$EmitLdloc
// address: 0x73bb184
// body: available
// range: 0x73bb184-0x73bb343 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73bb32c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73bb340 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_Internal_ILGeneratorExtensions__EmitLdloc(long *param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  long lVar3;
  
  if ((DAT_09520c27 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091cf6d8);
    FUN_03f5c2a4(&DAT_09188c40);
    DAT_09520c27 = 1;
  }
  if ((int)param_2 < 2) {
    if (param_2 == 0) {
      if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (param_1 != (long *)0x0) {
        lVar3 = *param_1;
        uVar1 = *(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x30);
        goto LAB_073bb2e4;
      }
      goto LAB_073bb32c;
    }
    if (param_2 == 1) {
      if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (param_1 == (long *)0x0) goto LAB_073bb32c;
      lVar3 = *param_1;
      uVar1 = *(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x38);
      goto LAB_073bb2e4;
    }
  }
  else {
    if (param_2 == 2) {
      if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (param_1 == (long *)0x0) goto LAB_073bb32c;
      lVar3 = *param_1;
      uVar1 = *(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x40);
LAB_073bb2e4:
                    /* WARNING: Could not recover jumptable at 0x073bb2f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar3 + 0x198))(param_1,uVar1,*(undefined8 *)(lVar3 + 0x1a0));
      return;
    }
    if (param_2 == 3) {
      if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (param_1 == (long *)0x0) goto LAB_073bb32c;
      lVar3 = *param_1;
      uVar1 = *(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x48);
      goto LAB_073bb2e4;
    }
  }
  if ((int)param_2 < 0x100) {
    if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (param_1 != (long *)0x0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x1a8);
      uVar1 = *(undefined8 *)(*param_1 + 0x1b0);
      uVar2 = *(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x88);
      goto LAB_073bb318;
    }
  }
  else {
    if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (0x7fff < param_2) {
      uVar1 = FUN_03f5c560();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar1,DAT_091cf6d8);
    }
    if (param_1 != (long *)0x0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x1b8);
      uVar1 = *(undefined8 *)(*param_1 + 0x1c0);
      uVar2 = *(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x690);
LAB_073bb318:
                    /* WARNING: Could not recover jumptable at 0x073bb328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,uVar2,param_2,uVar1);
      return;
    }
  }
LAB_073bb32c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

