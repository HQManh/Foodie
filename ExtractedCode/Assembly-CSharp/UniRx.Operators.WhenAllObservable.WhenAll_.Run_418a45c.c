// rea decompile_all
// name: UniRx.Operators.WhenAllObservable.WhenAll_$$Run
// address: 0x418a45c
// body: available
// range: 0x418a45c-0x418a883 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x418a714 to 0x409b8b8 UniRx.StableCompositeDisposable$$CreateUnsafe (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x418a864 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x418a868 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x418a874 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x418a87c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x418a880 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0418a820) */
/* WARNING: Removing unreachable block (ram,0x0418a878) */

undefined8 UniRx_Operators_WhenAllObservable_WhenAll___Run(long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  long *plVar10;
  
  if ((DAT_09516766 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183bd8);
    FUN_03f5c2a4(&DAT_09179fb0);
    FUN_03f5c2a4(&DAT_09180080);
    FUN_03f5c2a4(&DAT_0917aff8);
    FUN_03f5c2a4(&DAT_0917b238);
    FUN_03f5c2a4(&DAT_0917b288);
    FUN_03f5c2a4(&DAT_091b7e98);
    FUN_03f5c2a4(&DAT_0918c670);
    FUN_03f5c2a4(&DAT_09196ed0);
    DAT_09516766 = 1;
  }
  plVar9 = (long *)param_1[4];
  if (plVar9 == (long *)0x0) {
LAB_0418a864:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar4 = *plVar9;
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == DAT_09179fb0) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_0418a558;
      }
      uVar6 = uVar6 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09179fb0,0);
LAB_0418a558:
  iVar1 = (*(code *)*puVar2)(plVar9,puVar2[1]);
  *(int *)((long)param_1 + 0x34) = iVar1;
  if (iVar1 == 0) {
    if (*(int *)(DAT_0918c670 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_09515ed7 == '\0') {
      FUN_03f5c2a4(&DAT_0918c670);
      DAT_09515ed7 = '\x01';
    }
    if (*(int *)(DAT_0918c670 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    (**(code **)(*param_1 + 0x1b8))
              (param_1,**(undefined1 **)(DAT_0918c670 + 0xb8),*(undefined8 *)(*param_1 + 0x1c0));
    plVar9 = (long *)param_1[2];
    thunk_FUN_03f6a5cc();
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar4 = *plVar9;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_0917b288) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_0418a7e8;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar9,DAT_0917b288,2);
LAB_0418a7e8:
    (*(code *)*puVar2)(plVar9,puVar2[1]);
    FUN_05d4c16c(param_1,DAT_091b7e98);
    if (*(int *)(DAT_09183bd8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    return **(undefined8 **)(DAT_09183bd8 + 0xb8);
  }
  *(undefined4 *)(param_1 + 6) = 0;
  plVar9 = (long *)FUN_03f5c394(DAT_09180080,iVar1);
  if (0 < *(int *)((long)param_1 + 0x34)) {
    uVar6 = 0;
    do {
      plVar10 = (long *)param_1[4];
      if (plVar10 == (long *)0x0) goto LAB_0418a864;
      lVar4 = *plVar10;
      uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_0917aff8) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0418a608;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(plVar10,DAT_0917aff8,0);
LAB_0418a608:
      plVar10 = (long *)(*(code *)*puVar2)(plVar10,uVar6 & 0xffffffff,puVar2[1]);
      lVar4 = thunk_FUN_03f9944c(DAT_09196ed0);
      System_Object___ctor(lVar4,0);
      *(long *)(lVar4 + 0x10) = (long)param_1;
      thunk_FUN_03f5d7b8((long *)(lVar4 + 0x10),param_1);
      if (plVar10 == (long *)0x0) goto LAB_0418a864;
      lVar5 = *plVar10;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_0917b238) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0418a694;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(plVar10,DAT_0917b238,0);
LAB_0418a694:
      lVar4 = (*(code *)*puVar2)(plVar10,lVar4,puVar2[1]);
      if (plVar9 == (long *)0x0) goto LAB_0418a864;
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar9 + 0x40)), lVar5 == 0)) {
        uVar3 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar3,0);
      }
      if (*(uint *)(plVar9 + 3) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      plVar9[uVar6 + 4] = lVar4;
      thunk_FUN_03f5d7b8(plVar9 + uVar6 + 4,lVar4);
      uVar6 = uVar6 + 1;
    } while ((long)uVar6 < (long)*(int *)((long)param_1 + 0x34));
  }
  uVar3 = UniRx_StableCompositeDisposable__CreateUnsafe(plVar9,0);
  return uVar3;
}

