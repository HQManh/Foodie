// rea decompile_all
// name: MessagePack.Internal.ILGeneratorExtensions$$EmitLdc_I4
// address: 0x73bb68c
// body: available
// range: 0x73bb68c-0x73bb99b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73bb994 to 0x74f566c System.Reflection.Emit.ILGenerator$$Emit (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x73bb998 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_Internal_ILGeneratorExtensions__EmitLdc_I4(long *param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((DAT_09520c2a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091cf6d0);
    FUN_03f5c2a4(&DAT_09188c40);
    DAT_09520c2a = 1;
  }
  if (param_2 < 4) {
    if (param_2 < 1) {
      if (param_2 == -1) {
        if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (param_1 == (long *)0x0) goto LAB_073bb998;
        lVar2 = *param_1;
        uVar1 = *(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0xa8);
LAB_073bb908:
                    /* WARNING: Could not recover jumptable at 0x073bb918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar2 + 0x198))(param_1,uVar1,*(undefined8 *)(lVar2 + 0x1a0));
        return;
      }
      if (param_2 == 0) {
        if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (param_1 == (long *)0x0) goto LAB_073bb998;
        lVar2 = *param_1;
        uVar1 = *(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0xb0);
        goto LAB_073bb908;
      }
    }
    else {
      if (param_2 == 1) {
        if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (param_1 != (long *)0x0) {
          lVar2 = *param_1;
          uVar1 = *(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0xb8);
          goto LAB_073bb908;
        }
        goto LAB_073bb998;
      }
      if (param_2 == 2) {
        if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (param_1 == (long *)0x0) goto LAB_073bb998;
        lVar2 = *param_1;
        uVar1 = *(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0xc0);
        goto LAB_073bb908;
      }
      if (param_2 == 3) {
        if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (param_1 == (long *)0x0) goto LAB_073bb998;
        lVar2 = *param_1;
        uVar1 = *(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 200);
        goto LAB_073bb908;
      }
    }
  }
  else if (param_2 < 6) {
    if (param_2 == 4) {
      if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (param_1 == (long *)0x0) goto LAB_073bb998;
      lVar2 = *param_1;
      uVar1 = *(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0xd0);
      goto LAB_073bb908;
    }
    if (param_2 == 5) {
      if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (param_1 == (long *)0x0) goto LAB_073bb998;
      lVar2 = *param_1;
      uVar1 = *(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0xd8);
      goto LAB_073bb908;
    }
  }
  else {
    if (param_2 == 6) {
      if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (param_1 == (long *)0x0) goto LAB_073bb998;
      lVar2 = *param_1;
      uVar1 = *(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0xe0);
      goto LAB_073bb908;
    }
    if (param_2 == 7) {
      if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (param_1 == (long *)0x0) goto LAB_073bb998;
      lVar2 = *param_1;
      uVar1 = *(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0xe8);
      goto LAB_073bb908;
    }
    if (param_2 == 8) {
      if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (param_1 == (long *)0x0) goto LAB_073bb998;
      lVar2 = *param_1;
      uVar1 = *(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0xf0);
      goto LAB_073bb908;
    }
  }
  if (param_2 == (char)param_2) {
    if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (param_1 != (long *)0x0) {
      System_Reflection_Emit_ILGenerator__Emit
                (param_1,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0xf8),param_2,0);
      return;
    }
  }
  else {
    if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x073bb964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1c8))
                (param_1,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x100),param_2,
                 *(undefined8 *)(*param_1 + 0x1d0));
      return;
    }
  }
LAB_073bb998:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

