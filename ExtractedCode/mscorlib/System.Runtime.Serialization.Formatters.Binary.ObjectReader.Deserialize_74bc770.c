// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.ObjectReader$$Deserialize
// address: 0x74bc770
// body: available
// range: 0x74bc770-0x74bcb07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74bca10 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74bcaec to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74bcaf8 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74bcb04 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_Runtime_Serialization_Formatters_Binary_ObjectReader__Deserialize
          (long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  int *piVar12;
  undefined8 uVar13;
  
  if ((DAT_09521497 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091861a0);
    FUN_03f5c2a4(&DAT_09188b28);
    FUN_03f5c2a4(&DAT_0918a8c0);
    DAT_09521497 = 1;
  }
  if (param_3 == 0) {
    uVar4 = thunk_FUN_03fc39d4(&DAT_09180318);
    uVar4 = FUN_03f5c394(uVar4,1);
    FUN_039b1d98();
    FUN_039b0da0(uVar4,0);
    FUN_039af17c(uVar4,0,0);
    uVar10 = thunk_FUN_03fc39d4(&DAT_0920a410);
    uVar4 = System_Environment__GetResourceString(uVar10,uVar4,0);
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar3 = thunk_FUN_03f9944c();
    uVar10 = thunk_FUN_03fc39d4(&DAT_092222e0);
    System_ArgumentNullException___ctor(uVar3,uVar10,uVar4,0);
  }
  else {
    *(undefined1 *)(param_1 + 0xa0) = 0;
    System_Runtime_Serialization_Formatters_Binary_ObjectReader__set_TopObject(param_1,0);
    *(undefined8 *)(param_1 + 0x48) = 0;
    if (*(long *)(param_1 + 0x38) == 0) {
LAB_074bca10:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar1 = *(int *)(*(long *)(param_1 + 0x38) + 0x14);
    *(long *)(param_1 + 0x70) = param_2;
    *(bool *)(param_1 + 0x50) = iVar1 == 0;
    thunk_FUN_03f5d7b8((long *)(param_1 + 0x70),param_2);
    if (*(char *)(param_1 + 0xa0) != '\0') {
      uVar13 = *(undefined8 *)(param_1 + 0x28);
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      uVar10 = *(undefined8 *)(param_1 + 0x20);
      uVar3 = thunk_FUN_03f9944c(DAT_09188b28);
      System_Runtime_Serialization_ObjectManager___ctor(uVar3,uVar4,uVar10,uVar13,0,0,0);
      *(undefined8 *)(param_1 + 0x30) = uVar3;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x30),uVar3);
      uVar4 = thunk_FUN_03f9944c(DAT_0918a8c0);
      System_Runtime_Serialization_Formatters_Binary_SerObjectInfoInit___ctor();
      *(undefined8 *)(param_1 + 0x78) = uVar4;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x78),uVar4);
    }
    System_Runtime_Serialization_Formatters_Binary___BinaryParser__Run(param_3,0);
    if (*(char *)(param_1 + 0xa0) != '\0') {
      plVar5 = *(long **)(param_1 + 0x30);
      if (plVar5 == (long *)0x0) goto LAB_074bca10;
      (**(code **)(*plVar5 + 0x188))(plVar5,*(undefined8 *)(*plVar5 + 400));
    }
    if (*(long *)(param_1 + 0x60) != 0) {
      uVar4 = System_Object__GetType(*(long *)(param_1 + 0x60),0);
      uVar6 = System_Runtime_Serialization_Formatters_Binary_ObjectReader__HasSurrogate
                        (param_1,uVar4);
      if (((uVar6 & 1) != 0) && (*(long *)(param_1 + 0x48) != 0)) {
        plVar5 = *(long **)(param_1 + 0x30);
        if (plVar5 == (long *)0x0) goto LAB_074bca10;
        uVar4 = (**(code **)(*plVar5 + 0x178))
                          (plVar5,*(long *)(param_1 + 0x48),*(undefined8 *)(*plVar5 + 0x180));
        System_Runtime_Serialization_Formatters_Binary_ObjectReader__set_TopObject(param_1,uVar4);
      }
      lVar7 = thunk_FUN_03f99350(*(undefined8 *)(param_1 + 0x60),DAT_091861a0);
      lVar11 = DAT_091861a0;
      if (lVar7 != 0) {
        lVar7 = *(long *)(param_1 + 0x60);
        if (lVar7 == 0) goto LAB_074bca10;
        uVar4 = *(undefined8 *)(param_1 + 0x20);
        uVar10 = *(undefined8 *)(param_1 + 0x28);
        lVar8 = thunk_FUN_03f99350(lVar7,DAT_091861a0);
        lVar2 = DAT_091861a0;
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(lVar7,lVar11);
        }
        plVar5 = (long *)thunk_FUN_03f99350(lVar7,DAT_091861a0);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(lVar7,lVar2);
        }
        lVar11 = *plVar5;
        uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar6 != 0) {
          piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar2) {
              puVar9 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_074bc990;
            }
            uVar6 = uVar6 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar6 != 0);
        }
        puVar9 = (undefined8 *)FUN_03f95da8(plVar5,lVar2,0);
LAB_074bc990:
        uVar4 = (*(code *)*puVar9)(plVar5,uVar4,uVar10,puVar9[1]);
        System_Runtime_Serialization_Formatters_Binary_ObjectReader__set_TopObject(param_1,uVar4);
      }
      if (*(char *)(param_1 + 0xa0) != '\0') {
        plVar5 = *(long **)(param_1 + 0x30);
        if (plVar5 == (long *)0x0) goto LAB_074bca10;
        (**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
      }
      if (param_2 != 0) {
        uVar4 = (**(code **)(param_2 + 0x18))
                          (*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_1 + 0x68),
                           *(undefined8 *)(param_2 + 0x28));
        *(undefined8 *)(param_1 + 0x58) = uVar4;
        thunk_FUN_03f5d7b8();
      }
      return *(undefined8 *)(param_1 + 0x60);
    }
    uVar4 = thunk_FUN_03fc39d4(&DAT_09208cc0);
    uVar4 = System_Environment__GetResourceString(uVar4,0);
    thunk_FUN_03fc39d4(&DAT_0918a948);
    uVar3 = thunk_FUN_03f9944c();
    System_Runtime_Serialization_SerializationException___ctor(uVar3,uVar4,0);
  }
  uVar4 = thunk_FUN_03fc39d4(&DAT_091d5040);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar3,uVar4);
}

