// rea decompile_all
// name: System.Runtime.Remoting.TypeInfo$$.ctor
// address: 0x747e024
// body: available
// range: 0x747e024-0x747e443 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x747e1f8 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x747e43c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x747e440 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Remoting_TypeInfo___ctor(long param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  
  if ((DAT_095212cc & 1) == 0) {
    FUN_03f5c2a4(&DAT_09172338);
    FUN_03f5c2a4(&DAT_091805f8);
    DAT_095212cc = 1;
  }
  System_Object___ctor(param_1,0);
  if (param_2 != (long *)0x0) {
    uVar1 = System_Type__get_IsInterface(param_2,0);
    uVar3 = DAT_09172338;
    if ((uVar1 & 1) == 0) {
      uVar3 = (**(code **)(*param_2 + 0x2e8))(param_2,*(undefined8 *)(*param_2 + 0x2f0));
      *(undefined8 *)(param_1 + 0x10) = uVar3;
      thunk_FUN_03f5d7b8();
      plVar2 = (long *)(**(code **)(*param_2 + 0x8a8))(param_2,*(undefined8 *)(*param_2 + 0x8b0));
      uVar7 = 0;
      do {
        uVar3 = DAT_09172338;
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = System_Type__GetTypeFromHandle(uVar3,0);
        uVar1 = System_Type__op_Inequality(plVar2,uVar3,0);
        if ((uVar1 & 1) == 0) {
LAB_0747e2c8:
          lVar4 = FUN_03f5c394(DAT_091805f8,uVar7);
          plVar6 = (long *)(param_1 + 0x18);
          *plVar6 = lVar4;
          thunk_FUN_03f5d7b8(plVar6,lVar4);
          plVar2 = (long *)(**(code **)(*param_2 + 0x8a8))
                                     (param_2,*(undefined8 *)(*param_2 + 0x8b0));
          if ((int)uVar7 < 1) goto LAB_0747e380;
          uVar1 = 0;
          lVar4 = 0x20;
          goto LAB_0747e31c;
        }
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar1 = System_Type__op_Inequality(plVar2,0,0);
        if ((uVar1 & 1) == 0) goto LAB_0747e2c8;
        if (plVar2 == (long *)0x0) goto LAB_0747e43c;
        plVar2 = (long *)(**(code **)(*plVar2 + 0x8a8))(plVar2,*(undefined8 *)(*plVar2 + 0x8b0));
        uVar7 = uVar7 + 1;
      } while( true );
    }
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar2 = (long *)System_Type__GetTypeFromHandle(uVar3,0);
    if (plVar2 != (long *)0x0) {
      uVar3 = (**(code **)(*plVar2 + 0x2e8))(plVar2,*(undefined8 *)(*plVar2 + 0x2f0));
      *(undefined8 *)(param_1 + 0x10) = uVar3;
      thunk_FUN_03f5d7b8();
      uVar3 = FUN_03f5c394(DAT_091805f8,0);
      *(undefined8 *)(param_1 + 0x18) = uVar3;
      thunk_FUN_03f5d7b8();
      lVar4 = (**(code **)(*param_2 + 0x8c8))(param_2,*(undefined8 *)(*param_2 + 0x8d0));
      if (lVar4 != 0) {
        lVar5 = FUN_03f5c394(DAT_091805f8,*(int *)(lVar4 + 0x18) + 1);
        plVar2 = (long *)(param_1 + 0x20);
        *plVar2 = lVar5;
        thunk_FUN_03f5d7b8(plVar2,lVar5);
        uVar7 = *(uint *)(lVar4 + 0x18);
        if (0 < (int)uVar7) {
          uVar8 = 0;
          lVar5 = 0x20;
          do {
            if (uVar7 <= uVar8) goto LAB_0747e440;
            plVar6 = *(long **)(lVar4 + lVar5);
            if (plVar6 == (long *)0x0) goto LAB_0747e43c;
            lVar9 = *plVar2;
            uVar3 = (**(code **)(*plVar6 + 0x2e8))(plVar6,*(undefined8 *)(*plVar6 + 0x2f0));
            if (lVar9 == 0) goto LAB_0747e43c;
            if (*(uint *)(lVar9 + 0x18) <= uVar8) goto LAB_0747e440;
            *(undefined8 *)(lVar9 + lVar5) = uVar3;
            thunk_FUN_03f5d7b8(lVar9 + lVar5,uVar3);
            uVar7 = *(uint *)(lVar4 + 0x18);
            uVar8 = uVar8 + 1;
            lVar5 = lVar5 + 8;
          } while ((int)uVar8 < (int)uVar7);
        }
        lVar5 = *plVar2;
        uVar3 = (**(code **)(*param_2 + 0x2e8))(param_2,*(undefined8 *)(*param_2 + 0x2f0));
        if (lVar5 != 0) {
          uVar7 = (uint)*(undefined8 *)(lVar4 + 0x18);
          if (uVar7 < *(uint *)(lVar5 + 0x18)) {
            *(undefined8 *)(lVar5 + (long)(int)uVar7 * 8 + 0x20) = uVar3;
            thunk_FUN_03f5d7b8();
            return;
          }
LAB_0747e440:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
      }
    }
  }
LAB_0747e43c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    lVar5 = *plVar6;
    uVar3 = (**(code **)(*plVar2 + 0x2e8))(plVar2,*(undefined8 *)(*plVar2 + 0x2f0));
    if (lVar5 == 0) goto LAB_0747e43c;
    if (*(uint *)(lVar5 + 0x18) <= uVar1) goto LAB_0747e440;
    *(undefined8 *)(lVar5 + lVar4) = uVar3;
    thunk_FUN_03f5d7b8(lVar5 + lVar4,uVar3);
    plVar2 = (long *)(**(code **)(*plVar2 + 0x8a8))(plVar2,*(undefined8 *)(*plVar2 + 0x8b0));
    uVar1 = uVar1 + 1;
    lVar4 = lVar4 + 8;
    if (uVar7 == uVar1) break;
LAB_0747e31c:
    if (plVar2 == (long *)0x0) goto LAB_0747e43c;
  }
LAB_0747e380:
  lVar4 = (**(code **)(*param_2 + 0x8c8))(param_2,*(undefined8 *)(*param_2 + 0x8d0));
  if (lVar4 != 0) {
    lVar5 = FUN_03f5c394(DAT_091805f8,*(undefined4 *)(lVar4 + 0x18));
    plVar2 = (long *)(param_1 + 0x20);
    *plVar2 = lVar5;
    thunk_FUN_03f5d7b8(plVar2,lVar5);
    uVar7 = *(uint *)(lVar4 + 0x18);
    if (0 < (int)uVar7) {
      uVar8 = 0;
      lVar5 = 0x20;
      do {
        if (uVar7 <= uVar8) goto LAB_0747e440;
        plVar6 = *(long **)(lVar4 + lVar5);
        if (plVar6 == (long *)0x0) goto LAB_0747e43c;
        lVar9 = *plVar2;
        uVar3 = (**(code **)(*plVar6 + 0x2e8))(plVar6,*(undefined8 *)(*plVar6 + 0x2f0));
        if (lVar9 == 0) goto LAB_0747e43c;
        if (*(uint *)(lVar9 + 0x18) <= uVar8) goto LAB_0747e440;
        *(undefined8 *)(lVar9 + lVar5) = uVar3;
        thunk_FUN_03f5d7b8(lVar9 + lVar5,uVar3);
        uVar7 = *(uint *)(lVar4 + 0x18);
        uVar8 = uVar8 + 1;
        lVar5 = lVar5 + 8;
      } while ((int)uVar8 < (int)uVar7);
    }
    return;
  }
  goto LAB_0747e43c;
}

