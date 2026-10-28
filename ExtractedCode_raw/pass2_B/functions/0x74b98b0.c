// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo$$GetMemberTypes
// address: 0x74b98b0
// body: available
// range: 0x74b98b0-0x74b9da7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74b9be4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74b9c10 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74b9c1c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74b9d60 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * System_Runtime_Serialization_Formatters_Binary_ReadObjectInfo__GetMemberTypes
                 (long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  ulong uVar13;
  
  if ((DAT_09521490 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09172670);
    FUN_03f5c2a4(&DAT_09180748);
    DAT_09521490 = 1;
  }
  if (*(char *)(param_1 + 0x2c) != '\0') {
    uVar4 = thunk_FUN_03fc39d4(&DAT_09180318);
    uVar4 = FUN_03f5c394(uVar4,1);
    FUN_039b1d98();
    FUN_039b0da0(uVar4,param_3);
    FUN_039af17c(uVar4,0,param_3);
    puVar8 = &DAT_092113f0;
LAB_074b9d18:
    uVar11 = thunk_FUN_03fc39d4(puVar8);
    uVar4 = System_Environment__GetResourceString(uVar11,uVar4,0);
    thunk_FUN_03fc39d4(&DAT_0918a948);
    uVar11 = thunk_FUN_03f9944c();
    System_Runtime_Serialization_SerializationException___ctor(uVar11,uVar4,0);
    uVar4 = thunk_FUN_03fc39d4(&DAT_091d6f30);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar11,uVar4);
  }
  if (*(long *)(param_1 + 0x30) == 0) {
    return (long *)0x0;
  }
  plVar12 = (long *)(*(long *)(param_1 + 0x30) + 0x38);
  if (*plVar12 == 0) {
    lVar3 = FUN_03f5c394(DAT_09180748,*(undefined4 *)(param_1 + 0x28));
    *plVar12 = lVar3;
    uVar4 = thunk_FUN_03f5d7b8(plVar12,lVar3);
    if (0 < *(int *)(param_1 + 0x28)) {
      uVar13 = 0;
      lVar3 = 0x20;
      do {
        lVar9 = *(long *)(param_1 + 0x30);
        if ((lVar9 == 0) || (lVar10 = *(long *)(lVar9 + 0x28), lVar10 == 0)) goto LAB_074b9be4;
        if (*(uint *)(lVar10 + 0x18) <= uVar13) goto LAB_074b9c10;
        plVar12 = *(long **)(lVar9 + 0x38);
        lVar9 = System_Runtime_Serialization_Formatters_Binary_ReadObjectInfo__GetMemberType
                          (uVar4,*(undefined8 *)(lVar10 + lVar3));
        if (plVar12 == (long *)0x0) goto LAB_074b9be4;
        if ((lVar9 != 0) &&
           (lVar10 = thunk_FUN_03f99350(lVar9,*(undefined8 *)(*plVar12 + 0x40)), lVar10 == 0))
        goto LAB_074b9c14;
        if (*(uint *)(plVar12 + 3) <= uVar13) goto LAB_074b9c10;
        *(long *)((long)plVar12 + lVar3) = lVar9;
        uVar4 = thunk_FUN_03f5d7b8((long)plVar12 + lVar3,lVar9);
        uVar13 = uVar13 + 1;
        lVar3 = lVar3 + 8;
      } while ((long)uVar13 < (long)*(int *)(param_1 + 0x28));
    }
  }
  if (((param_2 != 0) && (*(long *)(param_1 + 0x30) != 0)) &&
     (lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 0x28), lVar3 != 0)) {
    iVar1 = *(int *)(lVar3 + 0x18);
    iVar2 = *(int *)(param_2 + 0x18);
    plVar12 = (long *)FUN_03f5c394(DAT_09180748,iVar1);
    lVar3 = *(long *)(param_1 + 0x30);
    if (lVar3 != 0) {
      uVar13 = 0;
      while (lVar3 = *(long *)(lVar3 + 0x28), lVar3 != 0) {
        if ((long)(int)*(uint *)(lVar3 + 0x18) <= (long)uVar13) {
          return plVar12;
        }
        if (iVar2 < iVar1) {
LAB_074b9ae4:
          if (0 < *(int *)(param_2 + 0x18)) {
            uVar6 = 0;
            do {
              if ((*(long *)(param_1 + 0x30) == 0) ||
                 (lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 0x28), lVar3 == 0))
              goto LAB_074b9be4;
              if (*(uint *)(lVar3 + 0x18) <= uVar13) goto LAB_074b9c10;
              plVar5 = *(long **)(lVar3 + uVar13 * 8 + 0x20);
              if (plVar5 == (long *)0x0) goto LAB_074b9be4;
              lVar3 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
              if (*(uint *)(param_2 + 0x18) <= uVar6) goto LAB_074b9c10;
              if (lVar3 == 0) goto LAB_074b9be4;
              uVar7 = System_String__Equals(lVar3,*(undefined8 *)(param_2 + 0x20 + uVar6 * 8),0);
              if ((uVar7 & 1) != 0) goto LAB_074b9a80;
              uVar6 = uVar6 + 1;
            } while ((long)uVar6 < (long)*(int *)(param_2 + 0x18));
          }
          uVar4 = DAT_09172670;
          if ((*(long *)(param_1 + 0x30) == 0) ||
             (lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 0x28), lVar3 == 0)) break;
          if (*(uint *)(lVar3 + 0x18) <= uVar13) goto LAB_074b9c10;
          plVar5 = *(long **)(lVar3 + uVar13 * 8 + 0x20);
          if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar4 = System_Type__GetTypeFromHandle(uVar4,0);
          if (plVar5 == (long *)0x0) break;
          lVar3 = (**(code **)(*plVar5 + 0x218))(plVar5,uVar4,0,*(undefined8 *)(*plVar5 + 0x220));
          if (((lVar3 == 0) || (*(long *)(lVar3 + 0x18) == 0)) &&
             (*(char *)(param_1 + 0x2f) == '\0')) {
            uVar4 = thunk_FUN_03fc39d4(&DAT_09180318);
            uVar4 = FUN_03f5c394(uVar4,3);
            lVar3 = *(long *)(param_1 + 0x30);
            FUN_039b1d98(lVar3);
            uVar11 = *(undefined8 *)(lVar3 + 0x30);
            FUN_039b1d98(uVar11);
            uVar11 = FUN_039c930c(uVar11,uVar13);
            FUN_039b1d98(uVar4);
            FUN_039b0da0(uVar4,uVar11);
            FUN_039af17c(uVar4,0,uVar11);
            FUN_039b0da0(uVar4,param_3);
            FUN_039af17c(uVar4,1,param_3);
            uVar11 = thunk_FUN_03fc39d4(&DAT_09172670);
            FUN_039afb80(DAT_095354b8);
            plVar12 = (long *)System_Type__GetTypeFromHandle(uVar11,0);
            FUN_039b1d98();
            uVar11 = (**(code **)(*plVar12 + 0x2f8))(plVar12,*(undefined8 *)(*plVar12 + 0x300));
            FUN_039b0da0(uVar4,uVar11);
            FUN_039af17c(uVar4,2,uVar11);
            puVar8 = &DAT_09207a28;
            goto LAB_074b9d18;
          }
        }
        else {
          if ((*(uint *)(param_2 + 0x18) <= uVar13) || (*(uint *)(lVar3 + 0x18) <= uVar13)) {
LAB_074b9c10:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          plVar5 = *(long **)(lVar3 + uVar13 * 8 + 0x20);
          if (plVar5 == (long *)0x0) break;
          lVar3 = *(long *)(param_2 + uVar13 * 8 + 0x20);
          uVar4 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
          if (lVar3 == 0) break;
          uVar6 = System_String__Equals(lVar3,uVar4,0);
          if ((uVar6 & 1) == 0) goto LAB_074b9ae4;
LAB_074b9a80:
          if ((*(long *)(param_1 + 0x30) == 0) ||
             (lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 0x38), lVar3 == 0)) break;
          if (*(uint *)(lVar3 + 0x18) <= uVar13) goto LAB_074b9c10;
          if (plVar12 == (long *)0x0) break;
          lVar3 = *(long *)(lVar3 + uVar13 * 8 + 0x20);
          if ((lVar3 != 0) &&
             (lVar9 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar12 + 0x40)), lVar9 == 0)) {
LAB_074b9c14:
            uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar4,0);
          }
          if (*(uint *)(plVar12 + 3) <= uVar13) goto LAB_074b9c10;
          plVar12[uVar13 + 4] = lVar3;
          thunk_FUN_03f5d7b8(plVar12 + uVar13 + 4,lVar3);
        }
        lVar3 = *(long *)(param_1 + 0x30);
        uVar13 = uVar13 + 1;
        if (lVar3 == 0) break;
      }
    }
  }
LAB_074b9be4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

