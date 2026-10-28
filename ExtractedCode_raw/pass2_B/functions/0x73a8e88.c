// rea decompile_all
// name: MessagePack.Resolvers.DynamicUnionResolver$$BuildConstructor
// address: 0x73a8e88
// body: available
// range: 0x73a8e88-0x73a926b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73a9264 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73a9268 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_Resolvers_DynamicUnionResolver__BuildConstructor
               (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,long *param_6)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  if ((DAT_09520ba2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c8ae0);
    FUN_03f5c2a4(&DAT_09183eb0);
    FUN_03f5c2a4(&DAT_09188c40);
    DAT_09520ba2 = 1;
  }
  MessagePack_Internal_ILGeneratorExtensions__EmitLdarg(param_6,0,0);
  if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = *(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x138);
  if (*(int *)(DAT_09183eb0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09183eb0);
  }
  if (param_6 != (long *)0x0) {
    (**(code **)(*param_6 + 0x1e8))
              (param_6,uVar2,*(undefined8 *)(*(long *)(DAT_09183eb0 + 0xb8) + 0xb8),
               *(undefined8 *)(*param_6 + 0x1f0));
    MessagePack_Internal_ILGeneratorExtensions__EmitLdarg(param_6,0,0);
    if (param_2 != 0) {
      MessagePack_Internal_ILGeneratorExtensions__EmitLdc_I4
                (param_6,*(undefined4 *)(param_2 + 0x18),0);
      (**(code **)(*param_6 + 0x228))
                (param_6,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x3d8),
                 *(undefined8 *)(*(long *)(DAT_09183eb0 + 0xb8) + 0x50),
                 *(undefined8 *)(*param_6 + 0x230));
      (**(code **)(*param_6 + 0x1e8))
                (param_6,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x390),
                 *(undefined8 *)(*(long *)(DAT_09183eb0 + 0xb8) + 0x60),
                 *(undefined8 *)(*param_6 + 0x1f0));
      uVar1 = *(uint *)(param_2 + 0x18);
      if (0 < (int)uVar1) {
        uVar3 = 0;
        do {
          if (uVar1 <= (uint)uVar3) goto LAB_073a9268;
          lVar4 = *(long *)(param_2 + 0x20 + uVar3 * 8);
          if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          (**(code **)(*param_6 + 0x198))
                    (param_6,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x120),
                     *(undefined8 *)(*param_6 + 0x1a0));
          if (lVar4 == 0) goto LAB_073a9264;
          (**(code **)(*param_6 + 600))
                    (param_6,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x570),
                     *(undefined8 *)(lVar4 + 0x18),*(undefined8 *)(*param_6 + 0x260));
          MessagePack_Internal_ILGeneratorExtensions__EmitLdc_I4
                    (param_6,*(undefined4 *)(lVar4 + 0x10),0);
          MessagePack_Internal_ILGeneratorExtensions__EmitLdc_I4(param_6,uVar3 & 0xffffffff,0);
          uVar2 = *(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x390);
          if (*(int *)(DAT_09183eb0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          (**(code **)(*param_6 + 0x1e8))
                    (param_6,uVar2,*(undefined8 *)(*(long *)(DAT_09183eb0 + 0xb8) + 0x58),
                     *(undefined8 *)(*param_6 + 0x1f0));
          MessagePack_Internal_ILGeneratorExtensions__EmitCall
                    (param_6,*(undefined8 *)(*(long *)(DAT_09183eb0 + 0xb8) + 0x68),0);
          uVar1 = *(uint *)(param_2 + 0x18);
          uVar3 = uVar3 + 1;
        } while ((int)uVar3 < (int)uVar1);
      }
      if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      (**(code **)(*param_6 + 0x228))
                (param_6,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x3d0),param_4,
                 *(undefined8 *)(*param_6 + 0x230));
      MessagePack_Internal_ILGeneratorExtensions__EmitLdarg(param_6,0,0);
      MessagePack_Internal_ILGeneratorExtensions__EmitLdc_I4
                (param_6,*(undefined4 *)(param_2 + 0x18),0);
      uVar2 = *(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x390);
      if (*(int *)(DAT_09183eb0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      (**(code **)(*param_6 + 0x1e8))
                (param_6,uVar2,*(undefined8 *)(*(long *)(DAT_09183eb0 + 0xb8) + 0x78),
                 *(undefined8 *)(*param_6 + 0x1f0));
      uVar1 = *(uint *)(param_2 + 0x18);
      if (0 < (int)uVar1) {
        uVar3 = 0;
        do {
          if (uVar1 <= (uint)uVar3) {
LAB_073a9268:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          lVar4 = *(long *)(param_2 + 0x20 + uVar3 * 8);
          if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          (**(code **)(*param_6 + 0x198))
                    (param_6,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x120),
                     *(undefined8 *)(*param_6 + 0x1a0));
          if (lVar4 == 0) goto LAB_073a9264;
          MessagePack_Internal_ILGeneratorExtensions__EmitLdc_I4
                    (param_6,*(undefined4 *)(lVar4 + 0x10),0);
          MessagePack_Internal_ILGeneratorExtensions__EmitLdc_I4(param_6,uVar3 & 0xffffffff,0);
          if (*(int *)(DAT_09183eb0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          MessagePack_Internal_ILGeneratorExtensions__EmitCall
                    (param_6,*(undefined8 *)(*(long *)(DAT_09183eb0 + 0xb8) + 0x80),0);
          uVar1 = *(uint *)(param_2 + 0x18);
          uVar3 = uVar3 + 1;
        } while ((int)uVar3 < (int)uVar1);
      }
      if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      (**(code **)(*param_6 + 0x228))
                (param_6,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x3d0),param_5,
                 *(undefined8 *)(*param_6 + 0x230));
                    /* WARNING: Could not recover jumptable at 0x073a9260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_6 + 0x198))
                (param_6,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x148),
                 *(undefined8 *)(*param_6 + 0x1a0));
      return;
    }
  }
LAB_073a9264:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

