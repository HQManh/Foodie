// rea decompile_all
// name: MessagePack.Internal.DynamicObjectTypeBuilder$$BuildConstructor
// address: 0x73c7cd4
// body: available
// range: 0x73c7cd4-0x73c82ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73c8200 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73c82c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73c82cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73c82e0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73c82e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73c82ec to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x073c82e8) */

void MessagePack_Internal_DynamicObjectTypeBuilder__BuildConstructor
               (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,long *param_5)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  if ((DAT_09520c9e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09170bb0);
    FUN_03f5c2a4(&DAT_091903f8);
    FUN_03f5c2a4(&DAT_091c8a80);
    FUN_03f5c2a4(&DAT_09183e88);
    FUN_03f5c2a4(&DAT_091c98b0);
    FUN_03f5c2a4(&DAT_091cb640);
    FUN_03f5c2a4(&DAT_091794c0);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a860);
    FUN_03f5c2a4(&DAT_0917af78);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09188c40);
    FUN_03f5c2a4(&DAT_091e93c0);
    FUN_03f5c2a4(&DAT_091e93c8);
    FUN_03f5c2a4(&DAT_09190398);
    DAT_09520c9e = 1;
  }
  MessagePack_Internal_ILGeneratorExtensions__EmitLdarg(param_5,0);
  if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar7 = *(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x138);
  if (*(int *)(DAT_09183e88 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09183e88);
  }
  if ((param_5 != (long *)0x0) &&
     ((**(code **)(*param_5 + 0x1e8))
                (param_5,uVar7,*(undefined8 *)(*(long *)(DAT_09183e88 + 0xb8) + 0x90),
                 *(undefined8 *)(*param_5 + 0x1f0)), param_2 != 0)) {
    uVar7 = *(undefined8 *)(param_2 + 0x30);
    if (*(int *)(DAT_09190398 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar3 = *(undefined8 **)(DAT_09190398 + 0xb8);
    lVar8 = puVar3[1];
    if (lVar8 == 0) {
      if (*(int *)(DAT_09190398 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar3 = *(undefined8 **)(DAT_09190398 + 0xb8);
      }
      uVar9 = *puVar3;
      lVar8 = thunk_FUN_03f9944c(DAT_091794c0);
      FUN_05322d94(lVar8,uVar9,DAT_091e93c0,0);
      plVar2 = (long *)(*(long *)(DAT_09190398 + 0xb8) + 8);
      *plVar2 = lVar8;
      thunk_FUN_03f5d7b8(plVar2,lVar8);
    }
    uVar1 = FUN_04adc4d0(uVar7,lVar8,DAT_091c98b0);
    MessagePack_Internal_ILGeneratorExtensions__EmitLdarg(param_5,0);
    MessagePack_Internal_ILGeneratorExtensions__EmitLdc_I4(param_5,uVar1);
    if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar7 = DAT_09170bb0;
    uVar9 = *(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x450);
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_095354b8);
    }
    uVar7 = System_Type__GetTypeFromHandle(uVar7,0);
    (**(code **)(*param_5 + 600))(param_5,uVar9,uVar7,*(undefined8 *)(*param_5 + 0x260));
    uVar7 = *(undefined8 *)(param_2 + 0x30);
    if (*(int *)(DAT_09190398 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar3 = *(undefined8 **)(DAT_09190398 + 0xb8);
    lVar8 = puVar3[2];
    if (lVar8 == 0) {
      if (*(int *)(DAT_09190398 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar3 = *(undefined8 **)(DAT_09190398 + 0xb8);
      }
      uVar9 = *puVar3;
      lVar8 = thunk_FUN_03f9944c(DAT_091794c0);
      FUN_05322d94(lVar8,uVar9,DAT_091e93c8,0);
      plVar2 = (long *)(*(long *)(DAT_09190398 + 0xb8) + 0x10);
      *plVar2 = lVar8;
      thunk_FUN_03f5d7b8(plVar2,lVar8);
    }
    plVar2 = (long *)FUN_04b0cafc(uVar7,lVar8,DAT_091cb640);
    if (plVar2 != (long *)0x0) {
      lVar8 = *plVar2;
      uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == DAT_0917a860) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_073c804c;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917a860,0);
LAB_073c804c:
      plVar2 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
      if (plVar2 != (long *)0x0) {
        iVar6 = 0;
        do {
          lVar8 = *plVar2;
          uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar4 != 0) {
            piVar5 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar5 + -2) == DAT_09185b10) {
                puVar3 = (undefined8 *)(lVar8 + (long)*piVar5 * 0x10 + 0x138);
                goto LAB_073c80d8;
              }
              uVar4 = uVar4 - 1;
              piVar5 = piVar5 + 4;
            } while (uVar4 != 0);
          }
          puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185b10,0);
LAB_073c80d8:
          uVar4 = (*(code *)*puVar3)(plVar2,puVar3[1]);
          if ((uVar4 & 1) == 0) {
            if (plVar2 == (long *)0x0) goto LAB_073c8274;
            lVar8 = *plVar2;
            uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar4 == 0) goto LAB_073c824c;
            piVar5 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            goto LAB_073c8234;
          }
          if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar8 = *plVar2;
          uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar4 != 0) {
            piVar5 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar5 + -2) == DAT_0917af78) {
                puVar3 = (undefined8 *)(lVar8 + (long)*piVar5 * 0x10 + 0x138);
                goto LAB_073c813c;
              }
              uVar4 = uVar4 - 1;
              piVar5 = piVar5 + 4;
            } while (uVar4 != 0);
          }
          puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917af78,0);
LAB_073c813c:
          lVar8 = (*(code *)*puVar3)(plVar2,puVar3[1]);
          if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          (**(code **)(*param_5 + 0x198))
                    (param_5,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x120),
                     *(undefined8 *)(*param_5 + 0x1a0));
          MessagePack_Internal_ILGeneratorExtensions__EmitLdc_I4(param_5,iVar6);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          (**(code **)(*param_5 + 0x248))
                    (param_5,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x388),
                     *(undefined8 *)(lVar8 + 0x18),*(undefined8 *)(*param_5 + 0x250));
          if (*(int *)(DAT_091903f8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          MessagePack_Internal_ILGeneratorExtensions__EmitCall
                    (param_5,**(undefined8 **)(DAT_091903f8 + 0xb8));
          (**(code **)(*param_5 + 0x198))
                    (param_5,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x4f8),
                     *(undefined8 *)(*param_5 + 0x1a0));
          if (iVar6 == 0x7fffffff) {
            uVar7 = FUN_03f5c560();
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar7,DAT_091c8a80);
          }
          iVar6 = iVar6 + 1;
        } while (plVar2 != (long *)0x0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
LAB_073c8234:
    if (*(long *)(piVar5 + -2) == DAT_09185a58) {
      puVar3 = (undefined8 *)(lVar8 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_073c8268;
    }
  }
LAB_073c824c:
  puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185a58,0);
LAB_073c8268:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
LAB_073c8274:
  if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  (**(code **)(*param_5 + 0x228))
            (param_5,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x3d0),param_4,
             *(undefined8 *)(*param_5 + 0x230));
  return;
}

