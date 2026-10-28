// rea decompile_all
// name: System.DelegateSerializationHolder$$GetDelegateData
// address: 0x7601758
// body: available
// range: 0x7601758-0x760175b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_DelegateSerializationHolder__GetDelegateData(long *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  uint uStack_54;
  
  if ((DAT_09521fdc & 1) == 0) {
    FUN_03f5c2a4(&DAT_091900f0);
    FUN_03f5c2a4(&DAT_09171580);
    FUN_03f5c2a4(&DAT_09200600);
    FUN_03f5c2a4(&DAT_09223c10);
    FUN_03f5c2a4(&DAT_0921f5b0);
    DAT_09521fdc = 1;
  }
  uStack_54 = 0;
  if (param_1 != (long *)0x0) {
    lVar2 = (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0));
    uStack_54 = 0;
    if (lVar2 != 0) {
      uVar1 = *(uint *)(lVar2 + 0x18);
      if (0 < (int)uVar1) {
        lVar6 = 0;
        do {
          if (uVar1 <= uStack_54) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          plVar7 = *(long **)(lVar2 + (long)(int)uStack_54 * 8 + 0x20);
          if (plVar7 == (long *)0x0) goto LAB_076019a0;
          if (plVar7[4] == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = System_Int32__ToString(&uStack_54,0);
            uVar3 = System_String__Concat(DAT_09223c10,uVar3,0);
          }
          lVar4 = thunk_FUN_03f9944c(DAT_091900f0);
          System_DelegateSerializationHolder_DelegateEntry___ctor(lVar4,plVar7,uVar3);
          if (lVar6 == 0) {
            if (param_2 == 0) goto LAB_076019a0;
            System_Runtime_Serialization_SerializationInfo__AddValue(param_2,DAT_09200600,lVar4,0);
            lVar6 = plVar7[4];
            if (lVar6 != 0) goto LAB_076018c8;
          }
          else {
            *(long *)(lVar6 + 0x40) = lVar4;
            thunk_FUN_03f5d7b8((long *)(lVar6 + 0x40),lVar4);
            lVar6 = plVar7[4];
            if (lVar6 != 0) {
              if (param_2 == 0) goto LAB_076019a0;
LAB_076018c8:
              System_Runtime_Serialization_SerializationInfo__AddValue(param_2,uVar3,lVar6,0);
            }
          }
          uVar3 = System_Int32__ToString(&uStack_54,0);
          uVar3 = System_String__Concat(DAT_0921f5b0,uVar3,0);
          uVar5 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
          if (param_2 == 0) goto LAB_076019a0;
          System_Runtime_Serialization_SerializationInfo__AddValue(param_2,uVar3,uVar5,0);
          uVar1 = *(uint *)(lVar2 + 0x18);
          uStack_54 = uStack_54 + 1;
          lVar6 = lVar4;
        } while ((int)uStack_54 < (int)uVar1);
      }
      uVar3 = DAT_09171580;
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = System_Type__GetTypeFromHandle(uVar3,0);
      if (param_2 != 0) {
        System_Runtime_Serialization_SerializationInfo__SetType(param_2,uVar3,0);
        return;
      }
    }
  }
LAB_076019a0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

