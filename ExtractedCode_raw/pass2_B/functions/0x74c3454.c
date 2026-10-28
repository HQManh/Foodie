// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.ObjectReader$$ParseArrayMember
// address: 0x74c3454
// body: available
// range: 0x74c3454-0x74c3bef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74c3b70 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c3b74 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c3b7c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c3b94 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c3be4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c3bec to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_Formatters_Binary_ObjectReader__ParseArrayMember
               (long param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined4 local_38;
  undefined4 local_34;
  
  if ((DAT_0952149d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182b98);
    FUN_03f5c2a4(&DAT_09184940);
    FUN_03f5c2a4(&DAT_091801b8);
    FUN_03f5c2a4(&DAT_09187008);
    FUN_03f5c2a4(&DAT_09188e88);
    FUN_03f5c2a4(&DAT_0918cad0);
    DAT_0952149d = 1;
  }
  if ((*(long *)(param_1 + 0x88) == 0) ||
     (plVar3 = (long *)System_Runtime_Serialization_Formatters_Binary_SerStack__Peek
                                 (*(long *)(param_1 + 0x88),0), plVar3 == (long *)0x0))
  goto LAB_074c3b74;
  plVar4 = plVar3;
  if (*plVar3 != DAT_09188e88) goto LAB_074c3b7c;
  if ((int)plVar3[3] == 3) {
    if (0 < (int)plVar3[0x16]) {
      plVar4 = (long *)System_Runtime_Serialization_Formatters_Binary_ObjectReader__NextRectangleMap
                                 (plVar3,plVar3);
    }
    if (((char)plVar3[0x18] != '\0') && (0 < (int)plVar3[0x10])) {
      lVar10 = plVar3[0x17];
      if (lVar10 == 0) goto LAB_074c3b74;
      lVar9 = plVar3[0x15];
      uVar1 = *(uint *)(lVar10 + 0x18);
      uVar7 = 0;
      do {
        if (uVar1 == uVar7) goto LAB_074c3b70;
        lVar11 = plVar3[0x13];
        if (lVar11 == 0) goto LAB_074c3b74;
        if (*(uint *)(lVar11 + 0x18) <= uVar7) goto LAB_074c3b70;
        if (lVar9 == 0) goto LAB_074c3b74;
        if (*(uint *)(lVar9 + 0x18) <= uVar7) goto LAB_074c3b70;
        *(int *)(lVar9 + 0x20 + uVar7 * 4) =
             *(int *)(lVar11 + uVar7 * 4 + 0x20) + *(int *)(lVar10 + 0x20 + uVar7 * 4);
        uVar7 = uVar7 + 1;
      } while ((long)uVar7 < (long)(int)plVar3[0x10]);
    }
  }
  else {
    lVar10 = plVar3[0x15];
    if ((char)plVar3[0x18] == '\0') {
      if (lVar10 == 0) goto LAB_074c3b74;
      if (*(int *)(lVar10 + 0x18) == 0) goto LAB_074c3b70;
      iVar8 = (int)plVar3[0x16];
    }
    else {
      lVar9 = plVar3[0x13];
      if (lVar9 == 0) goto LAB_074c3b74;
      if (*(int *)(lVar9 + 0x18) == 0) goto LAB_074c3b70;
      if (lVar10 == 0) goto LAB_074c3b74;
      if (*(int *)(lVar10 + 0x18) == 0) goto LAB_074c3b70;
      iVar8 = *(int *)(lVar9 + 0x20) + (int)plVar3[0x16];
    }
    *(int *)(lVar10 + 0x20) = iVar8;
  }
  if (param_2 == 0) goto LAB_074c3b74;
  iVar8 = *(int *)(param_2 + 0x20);
  if (iVar8 < 3) {
    if (iVar8 == 1) {
      lVar10 = plVar3[0xe];
      if (*(int *)(DAT_09182b98 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar9 = *(long *)(*(long *)(DAT_09182b98 + 0xb8) + 0x38);
      if (lVar10 == lVar9) {
LAB_074c37fc:
        System_Runtime_Serialization_Formatters_Binary_ObjectReader__ParseString
                  (param_1,param_2,plVar3);
        plVar4 = (long *)plVar3[0x1e];
        if (plVar4 != (long *)0x0) {
          lVar9 = plVar3[0x15];
          if (lVar9 == 0) goto LAB_074c3b74;
          if (*(int *)(lVar9 + 0x18) == 0) goto LAB_074c3b70;
          lVar10 = *(long *)(param_2 + 0x30);
          goto LAB_074c3828;
        }
        plVar4 = (long *)plVar3[0x1d];
        if (plVar4 == (long *)0x0) {
LAB_074c3b74:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(DAT_09535478 + 0x130)) ||
           (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(DAT_09535478 + 0x130) * 8 + -8) !=
            DAT_09535478)) {
LAB_074c3b7c:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(plVar4);
        }
        lVar10 = *(long *)(param_2 + 0x30);
LAB_074c398c:
        lVar9 = plVar3[0x15];
      }
      else {
        lVar10 = *(long *)(param_2 + 0x48);
        if (*(int *)(DAT_09182b98 + 0xe4) == 0) {
          FUN_03f5c424();
          lVar9 = *(long *)(*(long *)(DAT_09182b98 + 0xb8) + 0x38);
        }
        if (lVar10 == lVar9) goto LAB_074c37fc;
        if ((char)plVar3[0xf] == '\0') {
          if (plVar3[0x1f] != 0) {
            lVar10 = plVar3[0x15];
            if (lVar10 == 0) goto LAB_074c3b74;
            if (*(int *)(lVar10 + 0x18) == 0) goto LAB_074c3b70;
            System_Runtime_Serialization_Formatters_Binary_PrimitiveArray__SetValue
                      (plVar3[0x1f],*(undefined8 *)(param_2 + 0x30),*(undefined4 *)(lVar10 + 0x20),0
                      );
            goto LAB_074c3b50;
          }
          lVar10 = *(long *)(param_2 + 0x38);
          if (lVar10 == 0) {
            uVar5 = *(undefined8 *)(param_2 + 0x30);
            uVar2 = *(undefined4 *)((long)plVar3 + 0x7c);
            if (*(int *)(DAT_09182b98 + 0xe4) == 0) {
              FUN_03f5c424();
            }
LAB_074c3ad0:
            lVar10 = System_Runtime_Serialization_Formatters_Binary_Converter__FromString
                               (uVar5,uVar2);
          }
        }
        else {
          if (*(long *)(param_2 + 0x40) == 0) {
            uVar5 = thunk_FUN_03fc39d4(&DAT_091fbec8);
            uVar5 = System_Environment__GetResourceString(uVar5,0);
            thunk_FUN_03fc39d4(&DAT_0918a948);
            uVar6 = thunk_FUN_03f9944c();
            System_Runtime_Serialization_SerializationException___ctor(uVar6,uVar5,0);
            uVar5 = thunk_FUN_03fc39d4(&DAT_091d5058);
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar6,uVar5);
          }
          lVar10 = *(long *)(param_2 + 0x48);
          if (*(int *)(DAT_09182b98 + 0xe4) == 0) {
            FUN_03f5c424();
            lVar9 = *(long *)(*(long *)(DAT_09182b98 + 0xb8) + 0x38);
          }
          if (lVar10 == lVar9) {
            System_Runtime_Serialization_Formatters_Binary_ObjectReader__ParseString
                      (param_1,param_2,plVar3);
            lVar10 = *(long *)(param_2 + 0x30);
          }
          else {
            local_34 = *(undefined4 *)(param_2 + 0x50);
            lVar10 = FUN_03f5c42c(DAT_09187008,&local_34);
            local_38 = 0;
            lVar9 = FUN_03f5c42c(DAT_09187008,&local_38);
            if (lVar10 == lVar9) {
              System_Runtime_Serialization_Formatters_Binary_ObjectReader__CheckSerializable
                        (param_1,*(undefined8 *)(param_2 + 0x48));
              uVar5 = *(undefined8 *)(param_2 + 0x48);
              if (*(int *)(DAT_09184940 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              lVar10 = System_Runtime_Serialization_FormatterServices__GetUninitializedObject
                                 (uVar5,0);
            }
            else {
              lVar10 = *(long *)(param_2 + 0x38);
              if (lVar10 == 0) {
                uVar5 = *(undefined8 *)(param_2 + 0x30);
                uVar2 = *(undefined4 *)(param_2 + 0x50);
                if (*(int *)(DAT_09182b98 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                goto LAB_074c3ad0;
              }
            }
          }
        }
        lVar9 = plVar3[0x1e];
        if (lVar9 != 0) {
          lVar11 = plVar3[0x15];
          if (lVar11 == 0) goto LAB_074c3b74;
          if (*(int *)(lVar11 + 0x18) == 0) goto LAB_074c3b70;
          iVar8 = *(int *)(lVar11 + 0x20);
          FUN_039b0da0(lVar9,lVar10);
          FUN_039af17c(lVar9,(long)iVar8,lVar10);
          goto LAB_074c3b50;
        }
        lVar12 = plVar3[0x1d];
        lVar9 = plVar3[0x15];
        lVar11 = FUN_039bb5f0(lVar12,DAT_09535478);
        if (lVar11 == 0) goto LAB_074c3b74;
        plVar4 = (long *)FUN_039bb5f0(lVar12,DAT_09535478);
      }
LAB_074c3b48:
      System_Array__SetValue(plVar4,lVar10,lVar9,0);
      goto LAB_074c3b50;
    }
    if (iVar8 != 2) {
LAB_074c3b80:
      System_Runtime_Serialization_Formatters_Binary_ObjectReader__ParseError(plVar4,param_2,plVar3)
      ;
      goto LAB_074c3b8c;
    }
    if (*(long *)(param_2 + 0x48) == 0) {
      *(long *)(param_2 + 0x48) = plVar3[0xe];
      thunk_FUN_03f5d7b8();
    }
    System_Runtime_Serialization_Formatters_Binary_ObjectReader__ParseObject(param_1,param_2);
    if (*(long *)(param_1 + 0x88) == 0) goto LAB_074c3b74;
    System_Runtime_Serialization_Formatters_Binary_SerStack__Push
              (*(long *)(param_1 + 0x88),param_2,0);
    if (plVar3[0xe] == 0) goto LAB_074c3b50;
    uVar7 = System_Type__get_IsValueType(plVar3[0xe],0);
    if (((uVar7 & 1) != 0) && (*(int *)(param_2 + 0x7c) == 0)) {
      *(undefined1 *)(param_2 + 0xe0) = 1;
      lVar10 = System_Runtime_Serialization_Formatters_Binary_ObjectReader__get_ValueFixupStack
                         (param_1);
      plVar4 = (long *)plVar3[0x1d];
      lVar9 = plVar3[0x15];
      uVar5 = thunk_FUN_03f9944c(DAT_0918cad0);
      if (plVar4 != (long *)0x0) {
        if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(DAT_09535478 + 0x130)) ||
           (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(DAT_09535478 + 0x130) * 8 + -8) !=
            DAT_09535478)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(plVar4);
        }
      }
      System_Runtime_Serialization_Formatters_Binary_ValueFixup___ctor(uVar5,plVar4,lVar9,0);
      if (lVar10 == 0) goto LAB_074c3b74;
      System_Runtime_Serialization_Formatters_Binary_SerStack__Push(lVar10,uVar5,0);
      goto LAB_074c3b50;
    }
    plVar4 = (long *)plVar3[0x1e];
    if (plVar4 == (long *)0x0) {
      plVar4 = (long *)plVar3[0x1d];
      if (plVar4 == (long *)0x0) goto LAB_074c3b74;
      if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(DAT_09535478 + 0x130)) ||
         (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(DAT_09535478 + 0x130) * 8 + -8) !=
          DAT_09535478)) goto LAB_074c3b7c;
      lVar10 = *(long *)(param_2 + 0xe8);
      goto LAB_074c398c;
    }
    lVar9 = plVar3[0x15];
    if (lVar9 == 0) goto LAB_074c3b74;
    if (*(int *)(lVar9 + 0x18) == 0) goto LAB_074c3b70;
    lVar10 = *(long *)(param_2 + 0xe8);
LAB_074c3828:
    uVar1 = *(uint *)(lVar9 + 0x20);
    if ((lVar10 != 0) &&
       (lVar9 = thunk_FUN_03f99350(lVar10,*(undefined8 *)(*plVar4 + 0x40)), lVar9 == 0)) {
LAB_074c3b8c:
      uVar5 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar5,0);
    }
    if (*(uint *)(plVar4 + 3) <= uVar1) {
LAB_074c3b70:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    plVar4 = plVar4 + (long)(int)uVar1 + 4;
    *plVar4 = lVar10;
  }
  else {
    if (iVar8 == 4) {
      *(int *)(plVar3 + 0x16) = (int)plVar3[0x16] + *(int *)(param_2 + 0x118) + -1;
      goto LAB_074c3b50;
    }
    if (iVar8 != 3) goto LAB_074c3b80;
    plVar4 = *(long **)(param_1 + 0x30);
    if (plVar4 == (long *)0x0) goto LAB_074c3b74;
    lVar10 = (**(code **)(*plVar4 + 0x178))
                       (plVar4,*(undefined8 *)(param_2 + 0x60),*(undefined8 *)(*plVar4 + 0x180));
    if (lVar10 == 0) {
      uVar5 = FUN_03f5c394(DAT_091801b8,(int)plVar3[0x10]);
      System_Array__Copy(plVar3[0x15],0,uVar5,0,(int)plVar3[0x10],0);
      plVar4 = *(long **)(param_1 + 0x30);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x1b8))
                  (plVar4,plVar3[0xb],uVar5,*(undefined8 *)(param_2 + 0x60),
                   *(undefined8 *)(*plVar4 + 0x1c0));
        goto LAB_074c3b50;
      }
      goto LAB_074c3b74;
    }
    plVar4 = (long *)plVar3[0x1e];
    if (plVar4 == (long *)0x0) {
      plVar4 = (long *)plVar3[0x1d];
      if (plVar4 == (long *)0x0) goto LAB_074c3b74;
      if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(DAT_09535478 + 0x130)) ||
         (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(DAT_09535478 + 0x130) * 8 + -8) !=
          DAT_09535478)) goto LAB_074c3b7c;
      lVar9 = plVar3[0x15];
      goto LAB_074c3b48;
    }
    lVar9 = plVar3[0x15];
    if (lVar9 == 0) goto LAB_074c3b74;
    if (*(int *)(lVar9 + 0x18) == 0) goto LAB_074c3b70;
    uVar1 = *(uint *)(lVar9 + 0x20);
    lVar9 = thunk_FUN_03f99350(lVar10,*(undefined8 *)(*plVar4 + 0x40));
    if (lVar9 == 0) goto LAB_074c3b8c;
    if (*(uint *)(plVar4 + 3) <= uVar1) goto LAB_074c3b70;
    plVar4 = plVar4 + (long)(int)uVar1 + 4;
    *plVar4 = lVar10;
  }
  thunk_FUN_03f5d7b8(plVar4,lVar10);
LAB_074c3b50:
  *(int *)(plVar3 + 0x16) = (int)plVar3[0x16] + 1;
  return;
}

