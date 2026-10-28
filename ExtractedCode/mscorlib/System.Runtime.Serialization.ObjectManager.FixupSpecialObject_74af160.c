// rea decompile_all
// name: System.Runtime.Serialization.ObjectManager$$FixupSpecialObject
// address: 0x74af160
// body: available
// range: 0x74af160-0x74af3cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74af318 to 0x74afb98 System.Runtime.Serialization.ObjectManager$$DoNewlyRegisteredObjectFixups (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74af31c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74af3cc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_ObjectManager__FixupSpecialObject(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if ((DAT_09521410 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091865e8);
    DAT_09521410 = 1;
  }
  if (param_2 != 0) {
    uVar1 = System_Runtime_Serialization_ObjectHolder__get_HasSurrogate(param_2,0);
    if ((uVar1 & 1) == 0) {
      System_Runtime_Serialization_ObjectManager__CompleteISerializableObject
                (uVar1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x28),
                 *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
    }
    else {
      plVar7 = *(long **)(param_2 + 0x30);
      if (plVar7 == (long *)0x0) goto LAB_074af31c;
      lVar5 = *plVar7;
      uVar3 = *(undefined8 *)(param_1 + 0x48);
      uVar4 = *(undefined8 *)(param_1 + 0x50);
      uVar8 = *(undefined8 *)(param_2 + 0x10);
      uVar9 = *(undefined8 *)(param_2 + 0x28);
      uVar1 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar1 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_091865e8) {
            puVar2 = (undefined8 *)(lVar5 + (long)(*piVar6 + 1) * 0x10 + 0x138);
            goto LAB_074af234;
          }
          uVar1 = uVar1 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar1 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(plVar7,DAT_091865e8,1);
LAB_074af234:
      lVar5 = (*(code *)*puVar2)(plVar7,uVar8,uVar9,uVar3,uVar4,0,puVar2[1]);
      if (lVar5 != 0) {
        uVar1 = System_Runtime_Serialization_ObjectHolder__get_CanSurrogatedObjectValueChange
                          (param_2,0);
        if (((uVar1 & 1) == 0) && (lVar5 != *(long *)(param_2 + 0x10))) {
          thunk_FUN_03fc39d4(&DAT_09182ff8);
          FUN_039afb80();
          uVar3 = System_Globalization_CultureInfo__get_CurrentCulture(0);
          uVar4 = thunk_FUN_03fc39d4(&DAT_09226590);
          uVar4 = System_Environment__GetResourceString(uVar4,0);
          FUN_039b1d98(plVar7);
          plVar7 = (long *)System_Object__GetType(plVar7,0);
          FUN_039b1d98();
          uVar8 = (**(code **)(*plVar7 + 0x2f8))(plVar7,*(undefined8 *)(*plVar7 + 0x300));
          uVar3 = System_String__Format(uVar3,uVar4,uVar8,0);
          thunk_FUN_03fc39d4(&DAT_0918a948);
          uVar4 = thunk_FUN_03f9944c();
          System_Runtime_Serialization_SerializationException___ctor(uVar4,uVar3);
          uVar3 = thunk_FUN_03fc39d4(&DAT_091d4f40);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar4,uVar3);
        }
        System_Runtime_Serialization_ObjectHolder__SetObjectValue(param_2,lVar5,param_1,0);
      }
      *(undefined8 *)(param_2 + 0x30) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(param_2 + 0x30),0);
      System_Runtime_Serialization_ObjectHolder__SetFlags(param_2,0);
    }
    *(undefined8 *)(param_2 + 0x28) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(param_2 + 0x28),0);
    System_Runtime_Serialization_ObjectHolder__set_RequiresSerInfoFixup(param_2,0,0);
    uVar1 = System_Runtime_Serialization_ObjectHolder__get_RequiresValueTypeFixup(param_2,0);
    if (((uVar1 & 1) != 0) &&
       (uVar1 = System_Runtime_Serialization_ObjectHolder__get_ValueTypeFixupPerformed(param_2,0),
       (uVar1 & 1) != 0)) {
      System_Runtime_Serialization_ObjectManager__DoValueTypeFixup
                (param_1,0,param_2,*(undefined8 *)(param_2 + 0x10));
    }
    System_Runtime_Serialization_ObjectManager__DoNewlyRegisteredObjectFixups(param_1,param_2);
    return;
  }
LAB_074af31c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

