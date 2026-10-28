// rea decompile_all
// name: System.DateTime$$.ctor
// address: 0x7594334
// body: available
// range: 0x7594334-0x75945f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x759458c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75945f4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_DateTime___ctor(ulong *param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  bool bVar10;
  
  if ((DAT_09521b7c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182b88);
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_0921a278);
    FUN_03f5c2a4(&DAT_09223e88);
    DAT_09521b7c = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar6 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_0921d490);
    System_ArgumentNullException___ctor(uVar6,uVar5,0);
  }
  else {
    lVar3 = System_Runtime_Serialization_SerializationInfo__GetEnumerator(param_2,0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    bVar10 = false;
    bVar1 = false;
    uVar8 = 0;
    uVar9 = 0;
    while (uVar4 = System_Runtime_Serialization_SerializationInfoEnumerator__MoveNext(lVar3,0),
          lVar2 = DAT_09183548, (uVar4 & 1) != 0) {
      uVar5 = System_Runtime_Serialization_SerializationInfoEnumerator__get_Name(lVar3,0);
      uVar4 = System_String__op_Equality(uVar5,DAT_09223e88,0);
      if ((uVar4 & 1) == 0) {
        uVar4 = System_String__op_Equality(uVar5,DAT_0921a278,0);
        if ((uVar4 & 1) != 0) {
          uVar5 = System_Runtime_Serialization_SerializationInfoEnumerator__get_Value(lVar3,0);
          if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09182ff8);
          }
          uVar6 = System_Globalization_CultureInfo__get_InvariantCulture(0);
          if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09182b88);
          }
          uVar9 = System_Convert__ToUInt64(uVar5,uVar6,0);
          bVar1 = true;
        }
      }
      else {
        uVar5 = System_Runtime_Serialization_SerializationInfoEnumerator__get_Value(lVar3,0);
        if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09182ff8);
        }
        uVar6 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09182b88);
        }
        uVar8 = System_Convert__ToInt64(uVar5,uVar6,0);
        bVar10 = true;
      }
    }
    if (bVar1 || bVar10) {
      if (!bVar1) {
        uVar9 = uVar8;
      }
      *param_1 = uVar9;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        FUN_03f5c424();
        uVar9 = *param_1;
      }
      if ((uVar9 & 0x3fffffffffffc000) < 0x2bca2875f4374000) {
        return;
      }
      thunk_FUN_03fc39d4(&DAT_0918a948);
      uVar6 = thunk_FUN_03f9944c();
      puVar7 = &DAT_09205a68;
    }
    else {
      thunk_FUN_03fc39d4(&DAT_0918a948);
      uVar6 = thunk_FUN_03f9944c();
      puVar7 = &DAT_09205a70;
    }
    uVar5 = thunk_FUN_03fc39d4(puVar7);
    System_Runtime_Serialization_SerializationException___ctor(uVar6,uVar5,0);
  }
  uVar5 = thunk_FUN_03fc39d4(&DAT_091c78b8);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar6,uVar5);
}

