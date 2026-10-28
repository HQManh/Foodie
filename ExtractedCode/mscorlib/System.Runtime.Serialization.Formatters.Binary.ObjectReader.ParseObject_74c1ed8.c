// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.ObjectReader$$ParseObject
// address: 0x74c1ed8
// body: available
// range: 0x74c1ed8-0x74c2237 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74c1fa0 to 0x74c2c74 System.Runtime.Serialization.Formatters.Binary.ObjectReader$$ParseArray (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74c20d0 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74c2110 to 0x74c1998 System.Runtime.Serialization.Formatters.Binary.ObjectReader$$set_TopObject (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74c218c to 0x74c3c48 System.Runtime.Serialization.Formatters.Binary.ObjectReader$$RegisterObject (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74c2190 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c222c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c2234 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_Formatters_Binary_ObjectReader__ParseObject
               (long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  
  if ((DAT_0952149a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182b98);
    FUN_03f5c2a4(&DAT_09184940);
    FUN_03f5c2a4(&DAT_09188e88);
    FUN_03f5c2a4(&DAT_0918c290);
    DAT_0952149a = 1;
  }
  if (*(char *)(param_1 + 0xa0) == '\0') {
    System_Runtime_Serialization_Formatters_Binary_ObjectReader__InitFullDeserialization(param_1);
  }
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0x24) == 1) {
      *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x58);
    }
    if (*(int *)(param_2 + 0x10) == 2) {
      if (*(long *)(param_1 + 0x88) == 0) goto LAB_074c2190;
      System_Runtime_Serialization_Formatters_Binary_SerStack__Push
                (*(long *)(param_1 + 0x88),param_2,0);
    }
    if (*(int *)(param_2 + 0x14) == 2) {
      System_Runtime_Serialization_Formatters_Binary_ObjectReader__ParseArray(param_1,param_2);
      return;
    }
    lVar2 = *(long *)(param_2 + 0x48);
    if (lVar2 == 0) {
      uVar3 = *(undefined8 *)(param_2 + 0x40);
      lVar2 = thunk_FUN_03f9944c(DAT_0918c290);
      System_Object___ctor(lVar2,0);
      *(undefined8 *)(lVar2 + 0x10) = uVar3;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x10),uVar3);
      plVar4 = (long *)(param_2 + 0xe8);
      *plVar4 = lVar2;
LAB_074c20c0:
      thunk_FUN_03f5d7b8(plVar4,lVar2);
      return;
    }
    if (*(int *)(DAT_09182b98 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (lVar2 == *(long *)(*(long *)(DAT_09182b98 + 0xb8) + 0x38)) {
      if (*(long *)(param_2 + 0x30) == 0) {
        return;
      }
      plVar4 = (long *)(param_2 + 0xe8);
      *plVar4 = *(long *)(param_2 + 0x30);
      thunk_FUN_03f5d7b8(plVar4);
      if (*(int *)(param_2 + 0x24) == 1) {
        System_Runtime_Serialization_Formatters_Binary_ObjectReader__set_TopObject(param_1,*plVar4);
        return;
      }
      if (*(long *)(param_1 + 0x88) != 0) {
        System_Runtime_Serialization_Formatters_Binary_SerStack__Pop(*(long *)(param_1 + 0x88),0);
        if (*(long *)(param_1 + 0x88) != 0) {
          lVar2 = *plVar4;
          plVar4 = (long *)System_Runtime_Serialization_Formatters_Binary_SerStack__Peek
                                     (*(long *)(param_1 + 0x88),0);
          if ((plVar4 != (long *)0x0) && (*plVar4 != DAT_09188e88)) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0(plVar4);
          }
          System_Runtime_Serialization_Formatters_Binary_ObjectReader__RegisterObject
                    (param_1,lVar2,param_2,plVar4,0);
          return;
        }
      }
    }
    else {
      System_Runtime_Serialization_Formatters_Binary_ObjectReader__CheckSerializable
                (param_1,*(undefined8 *)(param_2 + 0x48));
      uVar3 = *(undefined8 *)(param_2 + 0x48);
      if (*(int *)(DAT_09184940 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar2 = System_Runtime_Serialization_FormatterServices__GetUninitializedObject(uVar3,0);
      plVar4 = (long *)(param_2 + 0xe8);
      *plVar4 = lVar2;
      thunk_FUN_03f5d7b8(plVar4,lVar2);
      if (*(long *)(param_1 + 0x30) != 0) {
        System_Runtime_Serialization_ObjectManager__RaiseOnDeserializingEvent
                  (*(long *)(param_1 + 0x30),*plVar4,0);
        if (*plVar4 == 0) {
          uVar3 = thunk_FUN_03fc39d4(&DAT_09180318);
          uVar3 = FUN_03f5c394(uVar3,1);
          FUN_039b1d98(param_2);
          uVar1 = *(undefined8 *)(param_2 + 0x48);
          FUN_039b1d98(uVar3);
          FUN_039b0da0(uVar3,uVar1);
          FUN_039af17c(uVar3,0,uVar1);
          uVar1 = thunk_FUN_03fc39d4(&DAT_09210b50);
          uVar3 = System_Environment__GetResourceString(uVar1,uVar3,0);
          thunk_FUN_03fc39d4(&DAT_0918a948);
          uVar1 = thunk_FUN_03f9944c();
          System_Runtime_Serialization_SerializationException___ctor(uVar1,uVar3,0);
          uVar3 = thunk_FUN_03fc39d4(&DAT_091d5070);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar1,uVar3);
        }
        if (*(int *)(param_2 + 0x24) == 1) {
          System_Runtime_Serialization_Formatters_Binary_ObjectReader__set_TopObject(param_1);
        }
        plVar4 = (long *)(param_2 + 0xd8);
        if (*plVar4 != 0) {
          return;
        }
        lVar2 = System_Runtime_Serialization_Formatters_Binary_ReadObjectInfo__Create
                          (*(undefined8 *)(param_2 + 0x48),*(undefined8 *)(param_1 + 0x18),
                           *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                           *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x78),
                           *(undefined8 *)(param_1 + 0x80),*(undefined1 *)(param_1 + 0x50));
        *(long *)(param_2 + 0xd8) = lVar2;
        goto LAB_074c20c0;
      }
    }
  }
LAB_074c2190:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

