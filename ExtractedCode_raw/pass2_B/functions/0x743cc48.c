// rea decompile_all
// name: System.Text.StringBuilder$$.ctor
// address: 0x743cc48
// body: available
// range: 0x743cc48-0x743cf43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x743cea0 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x743cea4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x743cf40 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Text_StringBuilder___ctor(long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  
  if ((DAT_09521067 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fcc8);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_0921eed0);
    FUN_03f5c2a4(&DAT_0921ef80);
    FUN_03f5c2a4(&DAT_091fe5d8);
    DAT_09521067 = 1;
  }
  System_Object___ctor(param_1,0);
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar8 = thunk_FUN_03f9944c();
    uVar10 = thunk_FUN_03fc39d4(&DAT_0921d490);
    System_ArgumentNullException___ctor(uVar8,uVar10,0);
    goto LAB_0743cf2c;
  }
  lVar6 = System_Runtime_Serialization_SerializationInfo__GetEnumerator(param_2,0);
  if (lVar6 == 0) {
LAB_0743cea4:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar4 = 0;
  lVar11 = 0;
  bVar3 = false;
  uVar5 = 0x7fffffff;
  while (uVar7 = System_Runtime_Serialization_SerializationInfoEnumerator__MoveNext(lVar6,0),
        (uVar7 & 1) != 0) {
    uVar8 = System_Runtime_Serialization_SerializationInfoEnumerator__get_Name(lVar6,0);
    uVar7 = System_String__op_Equality(uVar8,DAT_0921eed0,0);
    if ((uVar7 & 1) == 0) {
      uVar7 = System_String__op_Equality(uVar8,DAT_0921ef80,0);
      if ((uVar7 & 1) == 0) {
        uVar7 = System_String__op_Equality(uVar8,DAT_091fe5d8,0);
        if ((uVar7 & 1) != 0) {
          uVar4 = System_Runtime_Serialization_SerializationInfo__GetInt32(param_2,DAT_091fe5d8,0);
          bVar3 = true;
        }
      }
      else {
        lVar11 = System_Runtime_Serialization_SerializationInfo__GetString(param_2,DAT_0921ef80,0);
      }
    }
    else {
      uVar5 = System_Runtime_Serialization_SerializationInfo__GetInt32(param_2,DAT_0921eed0,0);
    }
  }
  if (lVar11 == 0) {
    lVar11 = **(long **)(DAT_09535468 + 0xb8);
  }
  if ((int)uVar5 < 1) {
LAB_0743cea8:
    thunk_FUN_03fc39d4(&DAT_0918a948);
    uVar8 = thunk_FUN_03f9944c();
    puVar9 = &DAT_0920fe10;
  }
  else {
    if (lVar11 == 0) goto LAB_0743cea4;
    iVar1 = *(int *)(lVar11 + 0x10);
    if ((int)uVar5 < iVar1) goto LAB_0743cea8;
    if (!bVar3) {
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar8 = System_Math__Max(0x10,iVar1,0);
      uVar4 = System_Math__Min(uVar8,uVar5,0);
    }
    if (((-1 < (int)uVar4) && (*(int *)(lVar11 + 0x10) <= (int)uVar4)) && (uVar4 <= uVar5)) {
      *(uint *)(param_1 + 0x28) = uVar5;
      uVar8 = FUN_03f5c394(DAT_0917fcc8,uVar4);
      puVar12 = (undefined8 *)(param_1 + 0x10);
      *puVar12 = uVar8;
      thunk_FUN_03f5d7b8(puVar12,uVar8);
      System_String__CopyTo(lVar11,0,*puVar12,0,*(undefined4 *)(lVar11 + 0x10),0);
      uVar2 = *(undefined4 *)(lVar11 + 0x10);
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x20) = uVar2;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
      return;
    }
    thunk_FUN_03fc39d4(&DAT_0918a948);
    uVar8 = thunk_FUN_03f9944c();
    puVar9 = &DAT_0920fe00;
  }
  uVar10 = thunk_FUN_03fc39d4(puVar9);
  System_Runtime_Serialization_SerializationException___ctor(uVar8,uVar10,0);
LAB_0743cf2c:
  uVar10 = thunk_FUN_03fc39d4(&DAT_091da3e0);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar8,uVar10);
}

