// rea decompile_all
// name: MessagePack.MessagePackSecurity.ObjectFallbackEqualityComparer$$GetHashCode
// address: 0x73907b0
// body: available
// range: 0x73907b0-0x7390aff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7390a30 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7390ae0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7390ae4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7390ae8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7390aec to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7390af0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7390afc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
MessagePack_MessagePackSecurity_ObjectFallbackEqualityComparer__GetHashCode
          (long param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
  long *local_38;
  
  if ((DAT_09520ac7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0270);
    FUN_03f5c2a4(&DAT_09185b30);
    FUN_03f5c2a4(&DAT_091a9d50);
    FUN_03f5c2a4(&DAT_091928a8);
    FUN_03f5c2a4(&DAT_091bd470);
    FUN_03f5c2a4(&DAT_091bd478);
    FUN_03f5c2a4(&DAT_09180748);
    DAT_09520ac7 = 1;
  }
  local_38 = (long *)0x0;
  if (param_2 == (long *)0x0) {
    return 0;
  }
  lVar1 = System_Object__GetType(param_2,0);
  lVar6 = DAT_095353e8;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424(DAT_095354b8);
  }
  uVar2 = System_Type__GetTypeFromHandle(lVar6 + 0x20,0);
  uVar3 = System_Type__op_Equality(lVar1,uVar2,0);
  if ((uVar3 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x073908b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*param_2 + 0x158))(param_2,*(undefined8 *)(*param_2 + 0x160));
    return uVar2;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar3 = FUN_04a6dd34(*(long *)(param_1 + 0x18),lVar1,&local_38,DAT_091bd478);
    if ((uVar3 & 1) == 0) {
      if (*(int *)(DAT_091928a8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (**(long **)(DAT_091928a8 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      plVar4 = (long *)FUN_05629f08(**(long **)(DAT_091928a8 + 0xb8),DAT_091a9d50);
      plVar5 = (long *)FUN_03f5c394(DAT_09180748,1);
      if (plVar5 == (long *)0x0) {
LAB_07390ae4:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if ((lVar1 != 0) &&
         (lVar6 = thunk_FUN_03f99350(lVar1,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
        uVar2 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar2,0);
      }
      if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      plVar5[4] = lVar1;
      thunk_FUN_03f5d7b8(plVar5 + 4,lVar1);
      if (plVar4 == (long *)0x0) goto LAB_07390ae4;
      lVar7 = (**(code **)(*plVar4 + 0x418))(plVar4,plVar5,*(undefined8 *)(*plVar4 + 0x420));
      lVar6 = DAT_091c0270;
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      lVar9 = *(long *)(DAT_091c0270 + 0x38);
      if (lVar9 == 0) {
        FUN_03f95ac8(DAT_091c0270);
        lVar9 = *(long *)(lVar6 + 0x38);
      }
      lVar9 = *(long *)(lVar9 + 0x10);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_03f95a6c();
      }
      if (*(int *)(lVar9 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03f95a6c();
      }
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar7 = System_Reflection_MethodBase__Invoke(lVar7,uVar2,**(undefined8 **)(lVar6 + 0xb8),0);
      lVar6 = DAT_09185b30;
      if (lVar7 == 0) {
        plVar4 = (long *)0x0;
      }
      else {
        plVar4 = (long *)thunk_FUN_03f99350(lVar7,DAT_09185b30);
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(lVar7,lVar6);
        }
      }
      local_38 = plVar4;
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_07390ae0;
      FUN_0636137c(*(long *)(param_1 + 0x18),lVar1,plVar4,DAT_091bd470);
    }
    plVar4 = local_38;
    if (local_38 != (long *)0x0) {
      lVar6 = *local_38;
      uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar3 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == DAT_09185b30) {
            puVar8 = (undefined8 *)(lVar6 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_07390ab8;
          }
          uVar3 = uVar3 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar3 != 0);
      }
      puVar8 = (undefined8 *)FUN_03f95da8(local_38,DAT_09185b30,1);
LAB_07390ab8:
      uVar2 = (*(code *)*puVar8)(plVar4,param_2,puVar8[1]);
      return uVar2;
    }
  }
LAB_07390ae0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

