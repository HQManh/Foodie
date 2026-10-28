// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.ObjectReader$$ParseMember
// address: 0x74c2468
// body: available
// range: 0x74c2468-0x74c295f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74c251c to 0x74c3454 System.Runtime.Serialization.Formatters.Binary.ObjectReader$$ParseArrayMember (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74c25f0 to 0x74c99e8 System.Runtime.Serialization.Formatters.Binary.SerStack$$Push (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74c2768 to 0x74c1640 System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo$$AddValue (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74c27b0 to 0x74c16e4 System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo$$RecordFixup (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74c28ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c28b4 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c295c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_Formatters_Binary_ObjectReader__ParseMember
               (long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  
  if ((DAT_0952149e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182b88);
    FUN_03f5c2a4(&DAT_09182b98);
    FUN_03f5c2a4(&DAT_09188e88);
    FUN_03f5c2a4(&DAT_0918cad0);
    DAT_0952149e = 1;
  }
  if (*(long *)(param_1 + 0x88) == 0) goto LAB_074c28ac;
  plVar2 = (long *)System_Runtime_Serialization_Formatters_Binary_SerStack__Peek
                             (*(long *)(param_1 + 0x88),0);
  if ((plVar2 != (long *)0x0) && (*plVar2 != DAT_09188e88)) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c8d0(plVar2);
  }
  if (param_2 == 0) goto LAB_074c28ac;
  if (*(int *)(param_2 + 0x1c) == 3) {
    System_Runtime_Serialization_Formatters_Binary_ObjectReader__ParseArrayMember(param_1,param_2);
    return;
  }
  plVar8 = (long *)(param_2 + 0x48);
  plVar6 = plVar2;
  if (*plVar8 == 0) {
    if ((plVar2 == (long *)0x0) || (plVar6 = (long *)plVar2[0x1b], plVar6 == (long *)0x0))
    goto LAB_074c28ac;
    if (*(char *)((long)plVar6 + 0x2e) != '\0') {
      uVar5 = System_Runtime_Serialization_Formatters_Binary_ReadObjectInfo__GetType
                        (plVar6,*(undefined8 *)(param_2 + 0x28));
      *(undefined8 *)(param_2 + 0x48) = uVar5;
      plVar6 = (long *)thunk_FUN_03f5d7b8(plVar8,uVar5);
      lVar3 = *(long *)(param_2 + 0x48);
      if (lVar3 != 0) {
        if (*(int *)(DAT_09182b98 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        plVar6 = (long *)System_Runtime_Serialization_Formatters_Binary_Converter__ToCode(lVar3);
        *(int *)(param_2 + 0x50) = (int)plVar6;
      }
    }
  }
  iVar1 = *(int *)(param_2 + 0x20);
  if (iVar1 < 3) {
    if (iVar1 == 1) {
      lVar3 = *plVar8;
      if (*(int *)(DAT_09182b98 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar9 = *(long *)(DAT_09182b98 + 0xb8);
      if (lVar3 == *(long *)(lVar9 + 0x38)) {
        System_Runtime_Serialization_Formatters_Binary_ObjectReader__ParseString
                  (param_1,param_2,plVar2);
        if ((plVar2 == (long *)0x0) || (lVar3 = plVar2[0x1b], lVar3 == 0)) goto LAB_074c28ac;
        lVar9 = *(long *)(param_2 + 0x30);
      }
      else {
        iVar1 = *(int *)(param_2 + 0x50);
        if (iVar1 != 0) {
          lVar9 = *(long *)(param_2 + 0x38);
          if (lVar9 == 0) {
            uVar5 = *(undefined8 *)(param_2 + 0x30);
            if (*(int *)(DAT_09182b98 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar9 = System_Runtime_Serialization_Formatters_Binary_Converter__FromString
                              (uVar5,iVar1);
          }
          goto joined_r0x074c2704;
        }
        if (*(int *)(param_2 + 0x18) == 4) {
          if (plVar2 == (long *)0x0) goto LAB_074c28ac;
          uVar5 = *(undefined8 *)(param_2 + 0x28);
          uVar7 = *(undefined8 *)(param_2 + 0x30);
          lVar3 = plVar2[0x1b];
          if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar9 = System_Convert__FromBase64String(uVar7,0);
          if (lVar3 == 0) goto LAB_074c28ac;
          goto LAB_074c2758;
        }
        lVar3 = *plVar8;
        if (*(int *)(DAT_09182b98 + 0xe4) == 0) {
          FUN_03f5c424();
          lVar9 = *(long *)(DAT_09182b98 + 0xb8);
        }
        if (lVar3 == *(long *)(lVar9 + 0xc0)) goto LAB_074c28c4;
        System_Runtime_Serialization_Formatters_Binary_ObjectReader__ParseString
                  (param_1,param_2,plVar2);
        lVar3 = *(long *)(param_2 + 0x48);
        if (*(int *)(DAT_09182b98 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (lVar3 != *(long *)(*(long *)(DAT_09182b98 + 0xb8) + 200)) {
          if ((plVar2 != (long *)0x0) && (lVar3 = plVar2[0x1b], lVar3 != 0)) {
            if (*(char *)(lVar3 + 0x2c) == '\0') {
              return;
            }
            uVar5 = *(undefined8 *)(param_2 + 0x28);
            lVar9 = *(long *)(param_2 + 0x30);
            goto LAB_074c2758;
          }
          goto LAB_074c28ac;
        }
        if ((plVar2 == (long *)0x0) || (lVar3 = plVar2[0x1b], lVar3 == 0)) goto LAB_074c28ac;
        lVar9 = *(long *)(param_2 + 0x48);
      }
    }
    else {
      if (iVar1 != 2) goto LAB_074c28b8;
      System_Runtime_Serialization_Formatters_Binary_ObjectReader__ParseObject(param_1,param_2);
      if (*(long *)(param_1 + 0x88) == 0) goto LAB_074c28ac;
      System_Runtime_Serialization_Formatters_Binary_SerStack__Push
                (*(long *)(param_1 + 0x88),param_2,0);
      if (((*(long *)(param_2 + 0xd8) != 0) &&
          (lVar3 = *(long *)(*(long *)(param_2 + 0xd8) + 0x18), lVar3 != 0)) &&
         (uVar4 = System_Type__get_IsValueType(lVar3,0), (uVar4 & 1) != 0)) {
        *(undefined1 *)(param_2 + 0xe0) = 1;
        lVar3 = System_Runtime_Serialization_Formatters_Binary_ObjectReader__get_ValueFixupStack
                          (param_1);
        if (plVar2 != (long *)0x0) {
          lVar9 = plVar2[0x1d];
          uVar7 = *(undefined8 *)(param_2 + 0x28);
          lVar10 = plVar2[0x1b];
          uVar5 = thunk_FUN_03f9944c(DAT_0918cad0);
          System_Runtime_Serialization_Formatters_Binary_ValueFixup___ctor
                    (uVar5,lVar9,uVar7,lVar10,0);
          if (lVar3 != 0) {
            System_Runtime_Serialization_Formatters_Binary_SerStack__Push(lVar3,uVar5,0);
            return;
          }
        }
        goto LAB_074c28ac;
      }
      if ((plVar2 == (long *)0x0) || (lVar3 = plVar2[0x1b], lVar3 == 0)) goto LAB_074c28ac;
      lVar9 = *(long *)(param_2 + 0xe8);
    }
  }
  else {
    if (iVar1 != 3) {
      if (iVar1 == 4) {
        if ((plVar2 != (long *)0x0) && (lVar3 = plVar2[0x1b], lVar3 != 0)) {
          uVar5 = *(undefined8 *)(param_2 + 0x28);
          lVar9 = 0;
          goto LAB_074c2758;
        }
        goto LAB_074c28ac;
      }
LAB_074c28b8:
      System_Runtime_Serialization_Formatters_Binary_ObjectReader__ParseError(plVar6,param_2,plVar2)
      ;
LAB_074c28c4:
      uVar5 = thunk_FUN_03fc39d4(&DAT_09180318);
      uVar5 = FUN_03f5c394(uVar5,1);
      FUN_039b1d98(param_2);
      uVar7 = *(undefined8 *)(param_2 + 0x28);
      FUN_039b1d98(uVar5);
      FUN_039b0da0(uVar5,uVar7);
      FUN_039af17c(uVar5,0,uVar7);
      uVar7 = thunk_FUN_03fc39d4(&DAT_09211210);
      uVar5 = System_Environment__GetResourceString(uVar7,uVar5,0);
      thunk_FUN_03fc39d4(&DAT_0918a948);
      uVar7 = thunk_FUN_03f9944c();
      System_Runtime_Serialization_SerializationException___ctor(uVar7,uVar5,0);
      uVar5 = thunk_FUN_03fc39d4(&DAT_091d5068);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar7,uVar5);
    }
    plVar6 = *(long **)(param_1 + 0x30);
    if (plVar6 == (long *)0x0) goto LAB_074c28ac;
    lVar9 = (**(code **)(*plVar6 + 0x178))
                      (plVar6,*(undefined8 *)(param_2 + 0x60),*(undefined8 *)(*plVar6 + 0x180));
    if (lVar9 == 0) {
      if ((plVar2 != (long *)0x0) && (plVar2[0x1b] != 0)) {
        System_Runtime_Serialization_Formatters_Binary_ReadObjectInfo__AddValue
                  (plVar2[0x1b],*(undefined8 *)(param_2 + 0x28),0,plVar2 + 0x22,plVar2 + 0x21);
        if (plVar2[0x1b] != 0) {
          System_Runtime_Serialization_Formatters_Binary_ReadObjectInfo__RecordFixup
                    (plVar2[0x1b],plVar2[0xb],*(undefined8 *)(param_2 + 0x28),
                     *(undefined8 *)(param_2 + 0x60));
          return;
        }
      }
      goto LAB_074c28ac;
    }
joined_r0x074c2704:
    if ((plVar2 == (long *)0x0) || (lVar3 = plVar2[0x1b], lVar3 == 0)) {
LAB_074c28ac:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  uVar5 = *(undefined8 *)(param_2 + 0x28);
LAB_074c2758:
  System_Runtime_Serialization_Formatters_Binary_ReadObjectInfo__AddValue
            (lVar3,uVar5,lVar9,plVar2 + 0x22,plVar2 + 0x21);
  return;
}

