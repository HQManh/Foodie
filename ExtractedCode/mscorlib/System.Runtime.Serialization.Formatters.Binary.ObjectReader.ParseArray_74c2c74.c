// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.ObjectReader$$ParseArray
// address: 0x74c2c74
// body: available
// range: 0x74c2c74-0x74c337f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74c2e54 to 0x74c3c48 System.Runtime.Serialization.Formatters.Binary.ObjectReader$$RegisterObject (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74c3260 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74c32a4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c32a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c32b0 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c32bc to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c3374 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c337c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_Formatters_Binary_ObjectReader__ParseArray
               (long param_1,long param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  bool bVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  int iVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined4 local_34;
  
  if ((DAT_0952149c & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_09182b88);
    FUN_03f5c2a4(&DAT_09182b98);
    FUN_03f5c2a4(&DAT_0917fff0);
    FUN_03f5c2a4(&DAT_091801b8);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09188e88);
    FUN_03f5c2a4(&DAT_09189530);
    FUN_03f5c2a4(&DAT_091805f8);
    DAT_0952149c = 1;
  }
  if (param_2 == 0) goto LAB_074c32a8;
  iVar12 = *(int *)(param_2 + 0x18);
  if (iVar12 == 4) {
    lVar13 = *(long *)(param_2 + 0x30);
    if (lVar13 == 0) goto LAB_074c32a8;
    if (*(int *)(lVar13 + 0x10) < 1) {
      uVar3 = FUN_03f5c394(DAT_0917fc88,0);
    }
    else {
      if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = System_Convert__FromBase64String(lVar13,0);
    }
    *(undefined8 *)(param_2 + 0xe8) = uVar3;
    thunk_FUN_03f5d7b8();
    if (*(long *)(param_1 + 0x88) == 0) goto LAB_074c32a8;
    lVar13 = System_Runtime_Serialization_Formatters_Binary_SerStack__Peek
                       (*(long *)(param_1 + 0x88),0);
    if (lVar13 == param_2) {
      if (*(long *)(param_1 + 0x88) == 0) goto LAB_074c32a8;
      System_Runtime_Serialization_Formatters_Binary_SerStack__Pop(*(long *)(param_1 + 0x88),0);
    }
    if (*(int *)(param_2 + 0x24) == 1) {
      lVar13 = *(long *)(param_2 + 0xe8);
      goto LAB_074c2dfc;
    }
LAB_074c2e04:
    if (*(long *)(param_1 + 0x88) != 0) {
      plVar5 = (long *)System_Runtime_Serialization_Formatters_Binary_SerStack__Peek
                                 (*(long *)(param_1 + 0x88),0);
      if ((plVar5 != (long *)0x0) && (*plVar5 != DAT_09188e88)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar5);
      }
      System_Runtime_Serialization_Formatters_Binary_ObjectReader__RegisterObject
                (param_1,*(undefined8 *)(param_2 + 0xe8),param_2,plVar5,0);
      return;
    }
    goto LAB_074c32a8;
  }
  plVar5 = (long *)(param_2 + 0xe8);
  if (*plVar5 != 0) {
    uVar1 = *(undefined4 *)(param_2 + 0x7c);
    if (*(int *)(DAT_09182b98 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = System_Runtime_Serialization_Formatters_Binary_Converter__IsWriteAsByteArray(uVar1);
    if ((uVar4 & 1) != 0) {
      if (*(int *)(param_2 + 0x24) == 1) {
        lVar13 = *plVar5;
LAB_074c2dfc:
        System_Runtime_Serialization_Formatters_Binary_ObjectReader__set_TopObject(param_1,lVar13);
      }
      goto LAB_074c2e04;
    }
    iVar12 = *(int *)(param_2 + 0x18);
  }
  if (1 < iVar12 - 1U) {
    if (iVar12 != 3) {
      uVar3 = thunk_FUN_03fc39d4(&DAT_09180318);
      uVar3 = FUN_03f5c394(uVar3,1);
      FUN_039b1d98(param_2);
      local_34 = *(undefined4 *)(param_2 + 0x18);
      uVar7 = thunk_FUN_03fc39d4(&DAT_09186fa8);
      uVar7 = FUN_03f5c42c(uVar7,&local_34);
      FUN_039b1d98(uVar3);
      FUN_039b0da0(uVar3,uVar7);
      FUN_039af17c(uVar3,0,uVar7);
      uVar7 = thunk_FUN_03fc39d4(&DAT_09205590);
      uVar3 = System_Environment__GetResourceString(uVar7,uVar3,0);
      thunk_FUN_03fc39d4(&DAT_0918a948);
      uVar7 = thunk_FUN_03f9944c();
      System_Runtime_Serialization_SerializationException___ctor(uVar7,uVar3,0);
      uVar3 = thunk_FUN_03fc39d4(&DAT_091d5050);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar7,uVar3);
    }
    lVar13 = *(long *)(param_2 + 0x98);
    *(undefined1 *)(param_2 + 0xc0) = 0;
    if ((lVar13 == 0) ||
       (uVar4 = (ulong)*(uint *)(param_2 + 0x80), (int)*(uint *)(param_2 + 0x80) < 1)) {
      bVar8 = true;
    }
    else {
      uVar10 = (ulong)*(uint *)(lVar13 + 0x18);
      bVar8 = false;
      piVar11 = (int *)(lVar13 + 0x20);
      do {
        if (uVar10 == 0) goto LAB_074c32a4;
        if (*piVar11 != 0) {
          bVar8 = true;
          *(undefined1 *)(param_2 + 0xc0) = 1;
        }
        uVar4 = uVar4 - 1;
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 1;
      } while (uVar4 != 0);
      bVar8 = !bVar8;
    }
    lVar6 = *(long *)(param_2 + 0x70);
    if (lVar6 != 0) {
      if (bVar8) {
        lVar13 = System_Array__UnsafeCreateInstance(lVar6,*(undefined8 *)(param_2 + 0x88),0);
      }
      else {
        lVar13 = System_Array__CreateInstance(lVar6,*(undefined8 *)(param_2 + 0x88),lVar13,0);
      }
      *plVar5 = lVar13;
      thunk_FUN_03f5d7b8(plVar5,lVar13);
    }
    uVar2 = *(uint *)(param_2 + 0x80);
    uVar4 = (ulong)uVar2;
    if ((int)uVar2 < 1) {
      iVar12 = 1;
    }
    else {
      lVar13 = *(long *)(param_2 + 0x88);
      if (lVar13 == 0) goto LAB_074c32a8;
      iVar12 = 1;
      piVar11 = (int *)(lVar13 + 0x20);
      do {
        if (*(uint *)(lVar13 + 0x18) <= uVar2 - 1) goto LAB_074c32a4;
        uVar4 = uVar4 - 1;
        iVar12 = *piVar11 * iVar12;
        piVar11 = piVar11 + 1;
      } while (uVar4 != 0);
    }
    uVar3 = FUN_03f5c394(DAT_091801b8);
    *(undefined8 *)(param_2 + 0xa8) = uVar3;
    thunk_FUN_03f5d7b8();
    uVar3 = FUN_03f5c394(DAT_091801b8,*(undefined4 *)(param_2 + 0x80));
    *(undefined8 *)(param_2 + 0xb8) = uVar3;
    thunk_FUN_03f5d7b8((undefined8 *)(param_2 + 0xb8),uVar3);
    *(int *)(param_2 + 0xb4) = iVar12;
    return;
  }
  lVar13 = *(long *)(param_2 + 0x98);
  if (lVar13 == 0) {
LAB_074c2ebc:
    lVar13 = *(long *)(param_2 + 0x70);
    if (*(int *)(DAT_09182b98 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar6 = *(long *)(DAT_09182b98 + 0xb8);
    if (lVar13 == *(long *)(lVar6 + 0x38)) {
      lVar13 = *(long *)(param_2 + 0x88);
      if (lVar13 == 0) goto LAB_074c32a8;
      if (*(int *)(lVar13 + 0x18) == 0) goto LAB_074c32a4;
      puVar16 = &DAT_091805f8;
LAB_074c30d0:
      lVar13 = FUN_03f5c394(*puVar16,*(undefined4 *)(lVar13 + 0x20));
      plVar14 = (long *)(param_2 + 0xf0);
      *plVar14 = lVar13;
      thunk_FUN_03f5d7b8(plVar14,lVar13);
      lVar13 = *plVar14;
      bVar8 = false;
LAB_074c30f8:
      *plVar5 = lVar13;
      thunk_FUN_03f5d7b8(plVar5);
    }
    else {
      lVar13 = *(long *)(param_2 + 0x70);
      if (*(int *)(DAT_09182b98 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar6 = *(long *)(DAT_09182b98 + 0xb8);
      }
      if (lVar13 == *(long *)(lVar6 + 0xc0)) {
        lVar13 = *(long *)(param_2 + 0x88);
        if (lVar13 == 0) goto LAB_074c32a8;
        if (*(int *)(lVar13 + 0x18) == 0) goto LAB_074c32a4;
        puVar16 = &DAT_09180318;
        goto LAB_074c30d0;
      }
      lVar13 = *(long *)(param_2 + 0x70);
      if (lVar13 != 0) {
        lVar6 = FUN_03f5c394(DAT_091801b8,1);
        lVar9 = *(long *)(param_2 + 0x88);
        if (lVar9 == 0) {
LAB_074c32a8:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(int *)(lVar9 + 0x18) == 0) {
LAB_074c32a4:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        if (lVar6 == 0) goto LAB_074c32a8;
        if (*(int *)(lVar6 + 0x18) == 0) goto LAB_074c32a4;
        *(undefined4 *)(lVar6 + 0x20) = *(undefined4 *)(lVar9 + 0x20);
        lVar13 = System_Array__UnsafeCreateInstance(lVar13,lVar6,0);
        bVar8 = true;
        goto LAB_074c30f8;
      }
      bVar8 = true;
    }
    *(undefined1 *)(param_2 + 0xc0) = 0;
    if (*(int *)(param_2 + 0x18) == 1) {
      uVar1 = *(undefined4 *)(param_2 + 0x7c);
      if (*(int *)(DAT_09182b98 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = System_Runtime_Serialization_Formatters_Binary_Converter__IsWriteAsByteArray(uVar1);
      if ((uVar4 & 1) == 0) {
        if (bVar8) goto LAB_074c31b4;
      }
      else {
        uVar1 = *(undefined4 *)(param_2 + 0x7c);
        plVar14 = *(long **)(param_2 + 0xe8);
        uVar3 = thunk_FUN_03f9944c(DAT_09189530);
        if (plVar14 != (long *)0x0) {
          if ((*(byte *)(*plVar14 + 0x130) < *(byte *)(DAT_09535478 + 0x130)) ||
             (*(long *)(*(long *)(*plVar14 + 200) + (ulong)*(byte *)(DAT_09535478 + 0x130) * 8 + -8)
              != DAT_09535478)) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0(plVar14);
          }
        }
        System_Runtime_Serialization_Formatters_Binary_PrimitiveArray___ctor(uVar3,uVar1,plVar14,0);
        puVar16 = (undefined8 *)(param_2 + 0xf8);
        *puVar16 = uVar3;
LAB_074c31a8:
        thunk_FUN_03f5d7b8(puVar16,uVar3);
      }
    }
  }
  else {
    if (*(int *)(lVar13 + 0x18) == 0) goto LAB_074c32a4;
    if (*(int *)(lVar13 + 0x20) == 0) goto LAB_074c2ebc;
    if (*(long *)(param_2 + 0x70) != 0) {
      uVar3 = System_Array__CreateInstance
                        (*(long *)(param_2 + 0x70),*(undefined8 *)(param_2 + 0x88),lVar13,0);
      *(undefined8 *)(param_2 + 0xe8) = uVar3;
      thunk_FUN_03f5d7b8(plVar5,uVar3);
    }
    *(undefined1 *)(param_2 + 0xc0) = 1;
    if (*(int *)(param_2 + 0x18) == 1) {
LAB_074c31b4:
      if (((*(long *)(param_2 + 0x70) != 0) &&
          (uVar4 = System_Type__get_IsValueType(*(long *)(param_2 + 0x70),0), (uVar4 & 1) == 0)) &&
         (*(char *)(param_2 + 0xc0) == '\0')) {
        uVar15 = *(undefined8 *)(param_2 + 0xe8);
        uVar7 = FUN_039bcaa8(uVar15,DAT_09180318);
        uVar3 = DAT_09180318;
        puVar16 = (undefined8 *)(param_2 + 0xf0);
        *puVar16 = uVar7;
        uVar3 = FUN_039bcaa8(uVar15,uVar3);
        goto LAB_074c31a8;
      }
    }
  }
  uVar3 = DAT_0917fff0;
  if (*(int *)(param_2 + 0x24) == 3) {
    lVar13 = *plVar5;
    if (lVar13 == 0) {
      lVar6 = 0;
      *(undefined8 *)(param_1 + 0x68) = 0;
    }
    else {
      lVar6 = thunk_FUN_03f99350(lVar13,DAT_0917fff0);
      uVar7 = DAT_0917fff0;
      if (lVar6 == 0) {
LAB_074c32b4:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(lVar13,uVar3);
      }
      *(long *)(param_1 + 0x68) = lVar6;
      lVar6 = thunk_FUN_03f99350(lVar13,uVar7);
      uVar3 = uVar7;
      if (lVar6 == 0) goto LAB_074c32b4;
    }
    thunk_FUN_03f5d7b8(param_1 + 0x68,lVar6);
  }
  uVar3 = FUN_03f5c394(DAT_091801b8,1);
  *(undefined8 *)(param_2 + 0xa8) = uVar3;
  thunk_FUN_03f5d7b8((undefined8 *)(param_2 + 0xa8),uVar3);
  return;
}

