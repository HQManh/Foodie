// rea decompile_all
// name: MessagePack.Internal.DynamicObjectTypeBuilder$$BuildDeserializeInternalDeserializeLoopStringKey
// address: 0x73cb9b8
// body: available
// range: 0x73cb9b8-0x73cbc8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73cbb7c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73cbc8c to 0x73bc14c MessagePack.Internal.ILGeneratorExtensions$$EmitIncrementFor (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_Internal_DynamicObjectTypeBuilder__BuildDeserializeInternalDeserializeLoopStringKey
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
               undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,byte param_10,long param_11)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  
  if ((DAT_09520cab & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174808);
    FUN_03f5c2a4(&DAT_09181958);
    FUN_03f5c2a4(&DAT_091c8ab0);
    FUN_03f5c2a4(&DAT_09170ac8);
    FUN_03f5c2a4(&DAT_091e9478);
    FUN_03f5c2a4(&DAT_091903b8);
    DAT_09520cab = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_091903b8);
  MessagePack_Internal_DynamicObjectTypeBuilder_<>c__DisplayClass17_0___ctor(lVar1,0);
  if (lVar1 != 0) {
    puVar5 = (undefined8 *)(lVar1 + 0x10);
    *puVar5 = param_2;
    thunk_FUN_03f5d7b8(puVar5,param_2);
    *(undefined8 *)(lVar1 + 0x30) = param_6;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x30),param_6);
    *(undefined8 *)(lVar1 + 0x38) = param_1;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x38),param_1);
    *(undefined8 *)(lVar1 + 0x40) = param_3;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x40),param_3);
    *(undefined8 *)(lVar1 + 0x58) = param_7;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x58),param_7);
    *(undefined8 *)(lVar1 + 0x60) = param_8;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x60),param_8);
    uVar3 = DAT_09181958;
    *(byte *)(lVar1 + 0x68) = param_10 & 1;
    lVar2 = thunk_FUN_03f9944c(uVar3);
    MessagePack_Internal_AutomataDictionary___ctor(lVar2,0);
    plVar6 = (long *)(lVar1 + 0x70);
    *plVar6 = lVar2;
    thunk_FUN_03f5d7b8(plVar6,lVar2);
    if ((param_11 != 0) && (lVar2 = *(long *)(param_11 + 0x30), lVar2 != 0)) {
      uVar7 = 0;
      while (uVar3 = DAT_09170ac8, (long)uVar7 < (long)*(int *)(lVar2 + 0x18)) {
        lVar2 = *(long *)(lVar2 + uVar7 * 8 + 0x20);
        if ((lVar2 == 0) || (*plVar6 == 0)) goto LAB_073cbb7c;
        MessagePack_Internal_AutomataDictionary__Add
                  (*plVar6,*(undefined8 *)(lVar2 + 0x18),uVar7 & 0xffffffff,0);
        lVar2 = *(long *)(param_11 + 0x30);
        uVar7 = uVar7 + 1;
        if (lVar2 == 0) goto LAB_073cbb7c;
      }
      plVar6 = (long *)*puVar5;
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = System_Type__GetTypeFromHandle(uVar3,0);
      if (plVar6 != (long *)0x0) {
        uVar3 = (**(code **)(*plVar6 + 0x178))(plVar6,uVar3,*(undefined8 *)(*plVar6 + 0x180));
        *(undefined8 *)(lVar1 + 0x28) = uVar3;
        thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x28),uVar3);
        plVar6 = *(long **)(lVar1 + 0x10);
        uVar3 = System_Type__GetTypeFromHandle(DAT_09535448 + 0x20,0);
        if (plVar6 != (long *)0x0) {
          uVar3 = (**(code **)(*plVar6 + 0x178))(plVar6,uVar3,*(undefined8 *)(*plVar6 + 0x180));
          *(undefined8 *)(lVar1 + 0x78) = uVar3;
          thunk_FUN_03f5d7b8();
          uVar3 = *param_4;
          *(undefined8 *)(lVar1 + 0x20) = param_4[1];
          *(undefined8 *)(lVar1 + 0x18) = uVar3;
          thunk_FUN_03f5d7b8(lVar1 + 0x20,0);
          uVar3 = *param_5;
          *(undefined8 *)(lVar1 + 0x50) = param_5[1];
          *(undefined8 *)(lVar1 + 0x48) = uVar3;
          thunk_FUN_03f5d7b8(lVar1 + 0x50,0);
          uVar4 = *(undefined8 *)(lVar1 + 0x10);
          uVar3 = thunk_FUN_03f9944c(DAT_09174808);
          FUN_070a8c30(uVar3,lVar1,DAT_091e9478,0);
          MessagePack_Internal_ILGeneratorExtensions__EmitIncrementFor(uVar4,param_9,uVar3);
          return;
        }
      }
    }
  }
LAB_073cbb7c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

