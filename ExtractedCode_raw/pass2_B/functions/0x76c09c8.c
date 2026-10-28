// rea decompile_all
// name: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeISerializable
// address: 0x76c09c8
// body: available
// range: 0x76c09c8-0x76c0e3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76c0d5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76c0e3c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeISerializable
               (long param_1,long *param_2,long *param_3,long param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined8 local_68;
  long lStack_60;
  
  if ((DAT_095226e6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184918);
    FUN_03f5c2a4(&DAT_091865b0);
    FUN_03f5c2a4(&DAT_09187480);
    FUN_03f5c2a4(&DAT_091aeac8);
    FUN_03f5c2a4(&DAT_091aeaf8);
    FUN_03f5c2a4(&DAT_091aeb08);
    FUN_03f5c2a4(&DAT_0918a968);
    DAT_095226e6 = 1;
  }
  if (*(int *)(DAT_09187480 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = Newtonsoft_Json_Serialization_JsonTypeReflector__get_FullyTrusted();
  if ((uVar2 & 1) == 0) {
    uVar4 = System_Environment__get_NewLine(0);
    uVar12 = System_Environment__get_NewLine(0);
    uVar7 = thunk_FUN_03fc39d4(&DAT_09211188);
    uVar8 = thunk_FUN_03fc39d4(&DAT_09210a38);
    uVar4 = System_String__Concat(uVar7,uVar4,uVar8,uVar12,0);
    thunk_FUN_03fc39d4(&DAT_09182ff8);
    FUN_039afb80();
    uVar12 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    FUN_039b1d98(param_3);
    uVar7 = System_Object__GetType(param_3,0);
    uVar4 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar4,uVar12,uVar7,0);
    FUN_039b1d98(param_2);
    uVar12 = Newtonsoft_Json_JsonWriter__get_ContainerPath(param_2,0);
    uVar4 = Newtonsoft_Json_JsonSerializationException__Create(0,uVar12,uVar4,0,0);
    uVar12 = thunk_FUN_03fc39d4(&DAT_091d1bc0);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar4,uVar12);
  }
  Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__OnSerializing
            (param_1,param_2,param_4,param_3);
  lVar5 = DAT_091aeac8;
  lVar3 = *(long *)(param_1 + 0x48);
  if (lVar3 != 0) {
    lVar9 = *(long *)(lVar3 + 0x10);
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar9 != 0) {
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        plVar10 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
        *plVar10 = (long)param_3;
        thunk_FUN_03f5d7b8(plVar10,param_3);
      }
      else {
        FUN_057e0c68(lVar3,param_3,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70)
                    );
      }
      Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteObjectStart
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      if (param_4 != 0) {
        uVar12 = *(undefined8 *)(param_4 + 0x60);
        uVar4 = thunk_FUN_03f9944c(DAT_09184918);
        System_Runtime_Serialization_FormatterConverter___ctor(uVar4,0);
        lVar5 = thunk_FUN_03f9944c(DAT_0918a968);
        System_Runtime_Serialization_SerializationInfo___ctor(lVar5,uVar12,uVar4,0);
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 != 0) && (param_3 != (long *)0x0)) {
          lVar9 = *param_3;
          uVar4 = *(undefined8 *)(lVar3 + 0x60);
          uVar12 = *(undefined8 *)(lVar3 + 0x68);
          uVar2 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar2 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == DAT_091865b0) {
                puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_076c0bd0;
              }
              uVar2 = uVar2 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar2 != 0);
          }
          puVar6 = (undefined8 *)FUN_03f95da8(param_3,DAT_091865b0,0);
LAB_076c0bd0:
          (*(code *)*puVar6)(param_3,lVar5,uVar4,uVar12,puVar6[1]);
          if ((lVar5 != 0) &&
             (lVar5 = System_Runtime_Serialization_SerializationInfo__GetEnumerator(lVar5,0),
             lVar5 != 0)) {
            while (uVar2 = System_Runtime_Serialization_SerializationInfoEnumerator__MoveNext
                                     (lVar5,0), (uVar2 & 1) != 0) {
              System_Runtime_Serialization_SerializationInfoEnumerator__get_Current
                        (&local_68,lVar5,0);
              lVar3 = lStack_60;
              uVar4 = local_68;
              if (lStack_60 == 0) {
                uVar12 = 0;
              }
              else {
                uVar12 = Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetContract
                                   (param_1,lStack_60);
              }
              uVar2 = Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldWriteReference
                                (param_1,lVar3,0,uVar12,param_4,param_5);
              if ((uVar2 & 1) == 0) {
                uVar2 = Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__CheckForCircularReference
                                  (param_1,param_2,lVar3,0,uVar12,param_4,param_5);
                if ((uVar2 & 1) != 0) {
                  if (param_2 == (long *)0x0) goto LAB_076c0d5c;
                  (**(code **)(*param_2 + 0x5d8))(param_2,uVar4,*(undefined8 *)(*param_2 + 0x5e0));
                  Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeValue
                            (param_1,param_2,lVar3,uVar12,0,param_4,param_5);
                }
              }
              else {
                if (param_2 == (long *)0x0) goto LAB_076c0d5c;
                (**(code **)(*param_2 + 0x5d8))(param_2,uVar4,*(undefined8 *)(*param_2 + 0x5e0));
                Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteReference
                          (param_1,param_2,lVar3);
              }
            }
            if (param_2 != (long *)0x0) {
              (**(code **)(*param_2 + 0x588))(param_2,*(undefined8 *)(*param_2 + 0x590));
              lVar5 = *(long *)(param_1 + 0x48);
              if (lVar5 != 0) {
                FUN_057e251c(lVar5,*(int *)(lVar5 + 0x18) + -1,DAT_091aeaf8);
                Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__OnSerialized
                          (param_1,param_2,param_4,param_3);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_076c0d5c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

