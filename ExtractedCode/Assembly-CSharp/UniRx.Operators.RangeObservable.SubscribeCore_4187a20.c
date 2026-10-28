// rea decompile_all
// name: UniRx.Operators.RangeObservable$$SubscribeCore
// address: 0x4187a20
// body: available
// range: 0x4187a20-0x4187ce7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4187bac to 0x409d264 UniRx.Scheduler$$Schedule (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4187ce4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
UniRx_Operators_RangeObservable__SubscribeCore(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  undefined8 uVar11;
  
  if ((DAT_09516745 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091744f0);
    FUN_03f5c2a4(&DAT_09183bd8);
    FUN_03f5c2a4(&DAT_0917b268);
    FUN_03f5c2a4(&DAT_09193908);
    FUN_03f5c2a4(&DAT_0918a698);
    FUN_03f5c2a4(&DAT_091eed50);
    FUN_03f5c2a4(&DAT_09193900);
    DAT_09516745 = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_09193900);
  System_Object___ctor(lVar2,0);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x10) = param_1;
    thunk_FUN_03f5d7b8((long *)(lVar2 + 0x10),param_1);
    puVar7 = (undefined8 *)(lVar2 + 0x18);
    *puVar7 = param_2;
    thunk_FUN_03f5d7b8(puVar7,param_2);
    uVar11 = *puVar7;
    uVar3 = thunk_FUN_03f9944c(DAT_09193908);
    UniRx_Operators_RangeObservable_Range___ctor(uVar3,uVar11,param_3);
    *puVar7 = uVar3;
    thunk_FUN_03f5d7b8(puVar7,uVar3);
    lVar9 = *(long *)(param_1 + 0x20);
    if (*(int *)(DAT_0918a698 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (lVar9 != *(long *)(*(long *)(DAT_0918a698 + 0xb8) + 8)) {
      uVar11 = *(undefined8 *)(param_1 + 0x20);
      *(undefined4 *)(lVar2 + 0x20) = 0;
      uVar3 = thunk_FUN_03f9944c(DAT_091744f0);
      FUN_070a8c30(uVar3,lVar2,DAT_091eed50,0);
      if (*(int *)(DAT_0918a698 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UniRx_Scheduler__Schedule(uVar11,uVar3,0);
      return uVar3;
    }
    if (0 < *(int *)(param_1 + 0x18)) {
      iVar10 = 0;
      do {
        plVar8 = (long *)*puVar7;
        if (plVar8 == (long *)0x0) goto LAB_04187ce4;
        lVar2 = *plVar8;
        iVar1 = *(int *)(param_1 + 0x14);
        uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == DAT_0917b268) {
              puVar4 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_04187c20;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917b268,0);
LAB_04187c20:
        (*(code *)*puVar4)(plVar8,iVar1 + iVar10,puVar4[1]);
        iVar10 = iVar10 + 1;
      } while (iVar10 < *(int *)(param_1 + 0x18));
    }
    plVar8 = (long *)*puVar7;
    if (plVar8 != (long *)0x0) {
      lVar2 = *plVar8;
      uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_0917b268) {
            puVar7 = (undefined8 *)(lVar2 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_04187ca0;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar7 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917b268,2);
LAB_04187ca0:
      (*(code *)*puVar7)(plVar8,puVar7[1]);
      if (*(int *)(DAT_09183bd8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      return **(undefined8 **)(DAT_09183bd8 + 0xb8);
    }
  }
LAB_04187ce4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

