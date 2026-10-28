// rea decompile_all
// name: System.Runtime.Serialization.ObjectManager$$CompleteObject
// address: 0x74afed8
// body: available
// range: 0x74afed8-0x74b0537 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74b03d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74b03d4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74b03dc to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74b03e4 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74b0528 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74b0534 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_ObjectManager__CompleteObject
               (long param_1,long param_2,uint param_3)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  undefined8 local_78;
  long local_70;
  long *local_68;
  
  if ((DAT_09521413 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184518);
    FUN_03f5c2a4(&DAT_09184940);
    FUN_03f5c2a4(&DAT_091801b8);
    FUN_03f5c2a4(&DAT_09172338);
    FUN_03f5c2a4(&DAT_09187fd8);
    DAT_09521413 = 1;
  }
  local_70 = 0;
  local_68 = (long *)0x0;
  if (param_2 == 0) {
LAB_074b03d0:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  local_70 = 0;
  local_68 = (long *)0x0;
  plVar9 = (long *)(param_2 + 0x38);
  lVar12 = *plVar9;
  if (*(long *)(param_2 + 0x10) == 0) {
    uVar5 = thunk_FUN_03fc39d4(&DAT_09180318);
    uVar7 = FUN_03f5c394(uVar5,1);
    FUN_039b1d98(param_2);
    local_78 = *(undefined8 *)(param_2 + 0x18);
    uVar5 = FUN_03f5c42c(DAT_09535440,&local_78);
    FUN_039b1d98(uVar7);
    FUN_039b0da0(uVar7,uVar5);
    FUN_039af17c(uVar7,0,uVar5);
    puVar6 = &DAT_0920f9d0;
LAB_074b04c0:
    uVar5 = thunk_FUN_03fc39d4(puVar6);
    uVar5 = System_Environment__GetResourceString(uVar5,uVar7,0);
LAB_074b04f4:
    thunk_FUN_03fc39d4(&DAT_0918a948);
    uVar7 = thunk_FUN_03f9944c();
    System_Runtime_Serialization_SerializationException___ctor(uVar7,uVar5);
    uVar5 = thunk_FUN_03fc39d4(&DAT_091d4f30);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar7,uVar5);
  }
  if (lVar12 == 0) {
    return;
  }
  uVar3 = System_Runtime_Serialization_ObjectHolder__get_HasSurrogate(param_2,0);
  if (((uVar3 & 1) == 0) &&
     (uVar3 = System_Runtime_Serialization_ObjectHolder__get_HasISerializable(param_2,0),
     (uVar3 & 1) == 0)) {
    iVar2 = *(int *)(lVar12 + 0x18);
    if (0 < iVar2) {
      uVar3 = 0;
      iVar13 = 0;
      lVar10 = 0x20;
      do {
        lVar14 = *(long *)(lVar12 + 0x10);
        if (lVar14 == 0) goto LAB_074b03d0;
        if (*(uint *)(lVar14 + 0x18) <= uVar3) goto LAB_074b03d4;
        lVar14 = *(long *)(lVar14 + lVar10);
        if ((lVar14 != 0) &&
           (uVar4 = System_Runtime_Serialization_ObjectManager__GetCompletionInfo
                              (param_1,lVar14,&local_70,&local_68,param_3 & 1), (uVar4 & 1) != 0)) {
          if (local_70 == 0) goto LAB_074b03d0;
          uVar4 = System_Runtime_Serialization_ObjectHolder__get_TypeLoadExceptionReachable
                            (local_70,0);
          if ((uVar4 & 1) == 0) {
            if (*(char *)(param_2 + 0x68) != '\0') {
              if (local_70 == 0) goto LAB_074b03d0;
              *(undefined1 *)(local_70 + 0x68) = 1;
            }
          }
          else {
            if (local_70 == 0) goto LAB_074b03d0;
            *(undefined8 *)(param_2 + 0x60) = *(undefined8 *)(local_70 + 0x60);
            thunk_FUN_03f5d7b8(param_2 + 0x60);
            if (*(char *)(param_2 + 0x68) != '\0') {
              uVar5 = thunk_FUN_03fc39d4(&DAT_09180318);
              uVar7 = FUN_03f5c394(uVar5,1);
              FUN_039b1d98(param_2);
              lVar12 = *(long *)(param_2 + 0x60);
              FUN_039b1d98(lVar12);
              uVar5 = *(undefined8 *)(lVar12 + 0x10);
              FUN_039b1d98(uVar7);
              FUN_039b0da0(uVar7,uVar5);
              FUN_039af17c(uVar7,0,uVar5);
              puVar6 = &DAT_09211a90;
              goto LAB_074b04c0;
            }
          }
          plVar11 = local_68;
          if (*(int *)(lVar14 + 0x20) == 2) {
            if (local_68 == (long *)0x0) goto LAB_074b03d0;
            lVar14 = *local_68;
            if ((*(byte *)(lVar14 + 0x130) < *(byte *)(DAT_09187fd8 + 0x130)) ||
               (*(long *)(*(long *)(lVar14 + 200) + (ulong)*(byte *)(DAT_09187fd8 + 0x130) * 8 + -8)
                != DAT_09187fd8)) {
LAB_074b03d8:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c8d0(plVar11);
            }
            iVar2 = (**(code **)(lVar14 + 0x1a8))(local_68,*(undefined8 *)(lVar14 + 0x1b0));
            if (iVar2 != 4) goto LAB_074b0458;
            uVar4 = System_Runtime_Serialization_ObjectHolder__get_RequiresValueTypeFixup(param_2,0)
            ;
            if (((uVar4 & 1) == 0) ||
               (uVar4 = System_Runtime_Serialization_ObjectHolder__get_ValueTypeFixupPerformed
                                  (param_2,0), (uVar4 & 1) == 0)) {
              if (local_70 == 0) goto LAB_074b03d0;
              uVar5 = *(undefined8 *)(param_2 + 0x10);
              uVar7 = *(undefined8 *)(local_70 + 0x10);
              if (*(int *)(DAT_09184940 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              System_Runtime_Serialization_FormatterServices__SerializationSetValue
                        (plVar11,uVar5,uVar7);
            }
            else {
              if (local_70 == 0) goto LAB_074b03d0;
              if ((*(byte *)(*plVar11 + 0x130) < *(byte *)(DAT_09184518 + 0x130)) ||
                 (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(DAT_09184518 + 0x130) * 8 +
                           -8) != DAT_09184518)) goto LAB_074b03d8;
              System_Runtime_Serialization_ObjectManager__DoValueTypeFixup
                        (param_1,plVar11,param_2,*(undefined8 *)(local_70 + 0x10));
            }
            if (local_70 == 0) goto LAB_074b03d0;
            uVar4 = System_Runtime_Serialization_ObjectHolder__get_RequiresValueTypeFixup
                              (local_70,0);
            if ((uVar4 & 1) != 0) {
              if (local_70 == 0) goto LAB_074b03d0;
              System_Runtime_Serialization_ObjectHolder__set_ValueTypeFixupPerformed(local_70,1,0);
            }
          }
          else {
            if (*(int *)(lVar14 + 0x20) != 1) {
LAB_074b0458:
              puVar6 = &DAT_091fe058;
              goto LAB_074b04e8;
            }
            uVar4 = System_Runtime_Serialization_ObjectHolder__get_RequiresValueTypeFixup(param_2,0)
            ;
            plVar1 = local_68;
            uVar5 = DAT_091801b8;
            if ((uVar4 & 1) != 0) {
              puVar6 = &DAT_09212dc0;
              goto LAB_074b04e8;
            }
            if ((local_70 == 0) || (plVar11 = *(long **)(param_2 + 0x10), plVar11 == (long *)0x0))
            goto LAB_074b03d0;
            if ((*(byte *)(*plVar11 + 0x130) < *(byte *)(DAT_09535478 + 0x130)) ||
               (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(DAT_09535478 + 0x130) * 8 +
                         -8) != DAT_09535478)) goto LAB_074b03d8;
            uVar7 = *(undefined8 *)(local_70 + 0x10);
            if (local_68 == (long *)0x0) {
              lVar14 = 0;
            }
            else {
              lVar14 = thunk_FUN_03f99350(local_68,DAT_091801b8);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c8d0(plVar1,uVar5);
              }
            }
            System_Array__SetValue(plVar11,uVar7,lVar14,0);
          }
          lVar14 = *(long *)(lVar12 + 0x10);
          if (lVar14 == 0) goto LAB_074b03d0;
          if (*(uint *)(lVar14 + 0x18) <= uVar3) {
LAB_074b03d4:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          iVar13 = iVar13 + 1;
          *(undefined8 *)(lVar14 + lVar10) = 0;
          thunk_FUN_03f5d7b8(lVar14 + lVar10,0);
          if ((param_3 & 1) == 0) {
            System_Runtime_Serialization_ObjectHolder__DecrementFixupsRemaining(param_2,param_1,0);
            if (local_70 == 0) goto LAB_074b03d0;
            System_Runtime_Serialization_ObjectHolder__RemoveDependency
                      (local_70,*(undefined8 *)(param_2 + 0x18),0);
          }
        }
        iVar2 = *(int *)(lVar12 + 0x18);
        uVar3 = uVar3 + 1;
        lVar10 = lVar10 + 8;
      } while ((long)uVar3 < (long)iVar2);
      goto LAB_074b038c;
    }
  }
  else {
    lVar10 = *(long *)(param_2 + 0x28);
    if (lVar10 == 0) {
      puVar6 = &DAT_091faf80;
LAB_074b04e8:
      uVar5 = thunk_FUN_03fc39d4(puVar6);
      uVar5 = System_Environment__GetResourceString(uVar5,0);
      goto LAB_074b04f4;
    }
    iVar2 = *(int *)(lVar12 + 0x18);
    if (0 < iVar2) {
      uVar3 = 0;
      iVar13 = 0;
      lVar14 = 0x20;
      do {
        lVar8 = *(long *)(lVar12 + 0x10);
        if (lVar8 == 0) goto LAB_074b03d0;
        if (*(uint *)(lVar8 + 0x18) <= uVar3) goto LAB_074b03d4;
        if ((*(long *)(lVar8 + lVar14) != 0) &&
           (uVar4 = System_Runtime_Serialization_ObjectManager__GetCompletionInfo
                              (param_1,*(long *)(lVar8 + lVar14),&local_70,&local_68,param_3 & 1),
           plVar11 = local_68, (uVar4 & 1) != 0)) {
          if ((local_70 == 0) || (lVar8 = *(long *)(local_70 + 0x10), lVar8 == 0))
          goto LAB_074b03d0;
          uVar5 = System_Object__GetType(lVar8,0);
          if ((plVar11 != (long *)0x0) && (*plVar11 != DAT_09535468)) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0(plVar11);
          }
          System_Runtime_Serialization_SerializationInfo__UpdateValue(lVar10,plVar11,lVar8,uVar5,0);
          lVar8 = *(long *)(lVar12 + 0x10);
          if (lVar8 == 0) goto LAB_074b03d0;
          if (*(uint *)(lVar8 + 0x18) <= uVar3) goto LAB_074b03d4;
          iVar13 = iVar13 + 1;
          *(undefined8 *)(lVar8 + lVar14) = 0;
          thunk_FUN_03f5d7b8(lVar8 + lVar14,0);
          if ((param_3 & 1) == 0) {
            System_Runtime_Serialization_ObjectHolder__DecrementFixupsRemaining(param_2,param_1,0);
            if (local_70 == 0) goto LAB_074b03d0;
            System_Runtime_Serialization_ObjectHolder__RemoveDependency
                      (local_70,*(undefined8 *)(param_2 + 0x18),0);
          }
        }
        iVar2 = *(int *)(lVar12 + 0x18);
        uVar3 = uVar3 + 1;
        lVar14 = lVar14 + 8;
      } while ((long)uVar3 < (long)iVar2);
      goto LAB_074b038c;
    }
  }
  iVar13 = 0;
LAB_074b038c:
  *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) - (long)iVar13;
  if (iVar2 == iVar13) {
    *plVar9 = 0;
    thunk_FUN_03f5d7b8(plVar9,0);
  }
  return;
}

