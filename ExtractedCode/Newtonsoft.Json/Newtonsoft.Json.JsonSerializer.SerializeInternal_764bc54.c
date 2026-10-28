// rea decompile_all
// name: Newtonsoft.Json.JsonSerializer$$SerializeInternal
// address: 0x764bc54
// body: available
// range: 0x764bc54-0x764c22f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x764c22c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonSerializer__SerializeInternal
               (long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  if ((DAT_09522349 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09186850);
    FUN_03f5c2a4(&DAT_09187440);
    FUN_03f5c2a4(&DAT_091b6dd8);
    FUN_03f5c2a4(&DAT_091b6c10);
    FUN_03f5c2a4(&DAT_091b6c90);
    FUN_03f5c2a4(&DAT_091b6e08);
    FUN_03f5c2a4(&DAT_091b7458);
    FUN_03f5c2a4(&DAT_091b6c88);
    FUN_03f5c2a4(&DAT_091b6e00);
    FUN_03f5c2a4(&DAT_091b7450);
    FUN_03f5c2a4(&DAT_091b6dd0);
    FUN_03f5c2a4(&DAT_091b6c08);
    FUN_03f5c2a4(&DAT_091b6e10);
    FUN_03f5c2a4(&DAT_091b6de0);
    FUN_03f5c2a4(&DAT_091b7460);
    FUN_03f5c2a4(&DAT_091b6c18);
    FUN_03f5c2a4(&DAT_091b6c98);
    FUN_03f5c2a4(&DAT_0918bf88);
    FUN_03f5c2a4(&DAT_0921dee0);
    DAT_09522349 = 1;
  }
  local_60 = 0;
  local_58 = 0;
  local_70 = 0;
  local_68 = 0;
  local_78 = 0;
  Newtonsoft_Json_Utilities_ValidationUtils__ArgumentNotNull(param_2,DAT_0921dee0,0);
  local_58 = 0;
  if ((char)param_1[0xf] != '\0') {
    if (param_2 == 0) goto LAB_0764c22c;
    if (((param_1[0xf] & 0xffU) == 0) ||
       (*(int *)(param_2 + 0x34) != (int)((ulong)param_1[0xf] >> 0x20))) {
      FUN_05c30b18(&local_58,*(int *)(param_2 + 0x34),DAT_091b6e00);
      Newtonsoft_Json_JsonWriter__set_Formatting(param_2,*(undefined4 *)((long)param_1 + 0x7c),0);
    }
  }
  local_60 = 0;
  if ((char)param_1[0x10] != '\0') {
    if (param_2 == 0) goto LAB_0764c22c;
    if (((param_1[0x10] & 0xffU) == 0) ||
       (*(int *)(param_2 + 0x3c) != (int)((ulong)param_1[0x10] >> 0x20))) {
      FUN_05c30b18(&local_60,*(int *)(param_2 + 0x3c),DAT_091b6c08);
      Newtonsoft_Json_JsonWriter__set_DateFormatHandling
                (param_2,*(undefined4 *)((long)param_1 + 0x84),0);
    }
  }
  local_68 = 0;
  if ((char)param_1[0x11] != '\0') {
    if (param_2 == 0) goto LAB_0764c22c;
    if (((param_1[0x11] & 0xffU) == 0) ||
       (*(int *)(param_2 + 0x40) != (int)((ulong)param_1[0x11] >> 0x20))) {
      FUN_05c30b18(&local_68,*(int *)(param_2 + 0x40),DAT_091b6c88);
      Newtonsoft_Json_JsonWriter__set_DateTimeZoneHandling
                (param_2,*(undefined4 *)((long)param_1 + 0x8c),0);
    }
  }
  local_70 = 0;
  if ((char)param_1[0x13] != '\0') {
    if (param_2 == 0) goto LAB_0764c22c;
    if (((param_1[0x13] & 0xffU) == 0) ||
       (*(int *)(param_2 + 0x48) != (int)((ulong)param_1[0x13] >> 0x20))) {
      FUN_05c30b18(&local_70,*(int *)(param_2 + 0x48),DAT_091b6dd0);
      Newtonsoft_Json_JsonWriter__set_FloatFormatHandling
                (param_2,*(undefined4 *)((long)param_1 + 0x9c),0);
    }
  }
  local_78 = 0;
  if ((char)param_1[0x15] != '\0') {
    if (param_2 == 0) goto LAB_0764c22c;
    if (((param_1[0x15] & 0xffU) == 0) ||
       (*(int *)(param_2 + 0x44) != (int)((ulong)param_1[0x15] >> 0x20))) {
      FUN_05c30b18(&local_78,*(int *)(param_2 + 0x44),DAT_091b7450);
      Newtonsoft_Json_JsonWriter__set_StringEscapeHandling
                (param_2,*(undefined4 *)((long)param_1 + 0xac),0);
    }
  }
  plVar9 = (long *)param_1[0x16];
  lVar10 = 0;
  if (plVar9 != (long *)0x0) {
    if (param_2 == 0) goto LAB_0764c22c;
    uVar3 = Newtonsoft_Json_JsonWriter__get_Culture(param_2,0);
    uVar4 = (**(code **)(*plVar9 + 0x138))(plVar9,uVar3,*(undefined8 *)(*plVar9 + 0x140));
    lVar10 = 0;
    if ((uVar4 & 1) == 0) {
      lVar10 = Newtonsoft_Json_JsonWriter__get_Culture(param_2,0);
      *(long *)(param_2 + 0x58) = param_1[0x16];
      thunk_FUN_03f5d7b8();
    }
  }
  if ((char)param_1[0x1a] == '\0') {
    lVar11 = 0;
  }
  else {
    if (param_2 == 0) goto LAB_0764c22c;
    plVar9 = (long *)(param_2 + 0x50);
    uVar4 = System_String__op_Inequality(*plVar9,param_1[0x19],0);
    lVar11 = 0;
    if ((uVar4 & 1) != 0) {
      lVar11 = *plVar9;
      *plVar9 = param_1[0x19];
      thunk_FUN_03f5d7b8(plVar9);
    }
  }
  lVar5 = (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
  if (lVar5 == 0) {
LAB_0764c078:
    lVar5 = 0;
  }
  else {
    plVar9 = (long *)(**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
    if (plVar9 == (long *)0x0) goto LAB_0764c22c;
    lVar5 = *plVar9;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_09186850) {
          puVar6 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0764c040;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09186850,0);
LAB_0764c040:
    iVar2 = (*(code *)*puVar6)(plVar9,puVar6[1]);
    if (iVar2 < 4) goto LAB_0764c078;
    lVar5 = thunk_FUN_03f9944c(DAT_0918bf88);
    Newtonsoft_Json_Serialization_TraceJsonWriter___ctor(lVar5,param_2,0);
  }
  lVar7 = thunk_FUN_03f9944c(DAT_09187440);
  Newtonsoft_Json_Serialization_JsonSerializerInternalWriter___ctor(lVar7,param_1,0);
  if (lVar7 != 0) {
    lVar1 = param_2;
    if (lVar5 != 0) {
      lVar1 = lVar5;
    }
    Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__Serialize
              (lVar7,lVar1,param_3,param_4,0);
    if (lVar5 != 0) {
      plVar9 = (long *)(**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
      uVar3 = Newtonsoft_Json_Serialization_TraceJsonWriter__GetSerializedJsonMessage(lVar5,0);
      if (plVar9 == (long *)0x0) goto LAB_0764c22c;
      lVar5 = *plVar9;
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar4 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_09186850) {
            puVar6 = (undefined8 *)(lVar5 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_0764c138;
          }
          uVar4 = uVar4 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09186850,1);
LAB_0764c138:
      (*(code *)*puVar6)(plVar9,4,uVar3,0,puVar6[1]);
    }
    if ((char)local_58 != '\0') {
      if (param_2 == 0) goto LAB_0764c22c;
      Newtonsoft_Json_JsonWriter__set_Formatting(param_2,local_58._4_4_,0);
    }
    if ((char)local_60 != '\0') {
      if (param_2 == 0) goto LAB_0764c22c;
      Newtonsoft_Json_JsonWriter__set_DateFormatHandling(param_2,local_60._4_4_,0);
    }
    if ((char)local_68 != '\0') {
      if (param_2 == 0) goto LAB_0764c22c;
      Newtonsoft_Json_JsonWriter__set_DateTimeZoneHandling(param_2,local_68._4_4_,0);
    }
    if ((char)local_70 != '\0') {
      if (param_2 == 0) goto LAB_0764c22c;
      Newtonsoft_Json_JsonWriter__set_FloatFormatHandling(param_2,local_70._4_4_,0);
    }
    if ((char)local_78 != '\0') {
      if (param_2 == 0) goto LAB_0764c22c;
      Newtonsoft_Json_JsonWriter__set_StringEscapeHandling(param_2,local_78._4_4_,0);
    }
    if ((char)param_1[0x1a] != '\0') {
      if (param_2 == 0) goto LAB_0764c22c;
      *(long *)(param_2 + 0x50) = lVar11;
      thunk_FUN_03f5d7b8((long *)(param_2 + 0x50),lVar11);
    }
    if (lVar10 != 0) {
      if (param_2 == 0) goto LAB_0764c22c;
      *(long *)(param_2 + 0x58) = lVar10;
      thunk_FUN_03f5d7b8((long *)(param_2 + 0x58),lVar10);
    }
    return;
  }
LAB_0764c22c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

