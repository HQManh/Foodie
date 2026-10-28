// rea decompile_all
// name: System.Security.Claims.ClaimsIdentity$$GetObjectData
// address: 0x747c220
// body: available
// range: 0x747c220-0x747c6e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x747c6bc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x747c6c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x747c6c8 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x747c6cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x747c6d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x747c6d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x747c6dc to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x747c6e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x747c6e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0747c504) */
/* WARNING: Removing unreachable block (ram,0x0747c6d8) */
/* WARNING: Removing unreachable block (ram,0x0747c6c4) */

void System_Security_Claims_ClaimsIdentity__GetObjectData(long param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  
  if ((DAT_09521243 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181c60);
    FUN_03f5c2a4(&DAT_09182b88);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09188030);
    FUN_03f5c2a4(&DAT_0920e190);
    FUN_03f5c2a4(&DAT_0920e170);
    FUN_03f5c2a4(&DAT_0920e168);
    FUN_03f5c2a4(&DAT_0920e180);
    FUN_03f5c2a4(&DAT_0920e188);
    FUN_03f5c2a4(&DAT_0920e158);
    FUN_03f5c2a4(&DAT_0920e178);
    FUN_03f5c2a4(&DAT_0920e160);
    DAT_09521243 = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar5 = thunk_FUN_03f9944c();
    uVar7 = thunk_FUN_03fc39d4(&DAT_0921d490);
    System_ArgumentNullException___ctor(uVar5,uVar7,0);
    uVar7 = thunk_FUN_03fc39d4(&DAT_091c4c10);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar5,uVar7);
  }
  lVar2 = thunk_FUN_03f9944c(DAT_09181c60);
  System_Runtime_Serialization_Formatters_Binary_BinaryFormatter___ctor(lVar2,0);
  System_Runtime_Serialization_SerializationInfo__AddValue
            (param_2,DAT_0920e190,*(undefined8 *)(param_1 + 0x38),0);
  uVar3 = System_String__IsNullOrEmpty(*(undefined8 *)(param_1 + 0x48),0);
  if ((uVar3 & 1) == 0) {
    System_Runtime_Serialization_SerializationInfo__AddValue
              (param_2,DAT_0920e160,*(undefined8 *)(param_1 + 0x48),0);
  }
  System_Runtime_Serialization_SerializationInfo__AddValue
            (param_2,DAT_0920e180,*(undefined8 *)(param_1 + 0x28),0);
  System_Runtime_Serialization_SerializationInfo__AddValue
            (param_2,DAT_0920e188,*(undefined8 *)(param_1 + 0x30),0);
  uVar3 = System_String__IsNullOrEmpty(*(undefined8 *)(param_1 + 0x58),0);
  if ((uVar3 & 1) == 0) {
    System_Runtime_Serialization_SerializationInfo__AddValue
              (param_2,DAT_0920e178,*(undefined8 *)(param_1 + 0x58),0);
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    plVar4 = (long *)thunk_FUN_03f9944c(DAT_09188030);
    System_IO_MemoryStream___ctor(plVar4,0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    System_Runtime_Serialization_Formatters_Binary_BinaryFormatter__Serialize
              (lVar2,plVar4,*(undefined8 *)(param_1 + 0x40),0,0,0);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar5 = (**(code **)(*plVar4 + 0x3d8))(plVar4,*(undefined8 *)(*plVar4 + 0x3e0));
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar1 = (**(code **)(*plVar4 + 0x1f8))(plVar4,*(undefined8 *)(*plVar4 + 0x200));
    if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = System_Convert__ToBase64String(uVar5,0,uVar1,0);
    System_Runtime_Serialization_SerializationInfo__AddValue(param_2,DAT_0920e158,uVar5,0);
    if (plVar4 != (long *)0x0) {
      lVar8 = *plVar4;
      uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar3 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_09185a58) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0747c4ec;
          }
          uVar3 = uVar3 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar3 != 0);
      }
      puVar6 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185a58,0);
LAB_0747c4ec:
      (*(code *)*puVar6)(plVar4,puVar6[1]);
    }
  }
  uVar5 = System_Security_Claims_ClaimsIdentity__SerializeClaims(param_1);
  System_Runtime_Serialization_SerializationInfo__AddValue(param_2,DAT_0920e170,uVar5,0);
  if (*(long *)(param_1 + 0x50) != 0) {
    plVar4 = (long *)thunk_FUN_03f9944c(DAT_09188030);
    System_IO_MemoryStream___ctor(plVar4,0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    System_Runtime_Serialization_Formatters_Binary_BinaryFormatter__Serialize
              (lVar2,plVar4,*(undefined8 *)(param_1 + 0x50),0,0,0);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar5 = (**(code **)(*plVar4 + 0x3d8))(plVar4,*(undefined8 *)(*plVar4 + 0x3e0));
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar1 = (**(code **)(*plVar4 + 0x1f8))(plVar4,*(undefined8 *)(*plVar4 + 0x200));
    if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = System_Convert__ToBase64String(uVar5,0,uVar1,0);
    System_Runtime_Serialization_SerializationInfo__AddValue(param_2,DAT_0920e168,uVar5,0);
    if (plVar4 != (long *)0x0) {
      lVar2 = *plVar4;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_09185a58) {
            puVar6 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0747c64c;
          }
          uVar3 = uVar3 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar3 != 0);
      }
      puVar6 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185a58,0);
LAB_0747c64c:
      (*(code *)*puVar6)(plVar4,puVar6[1]);
    }
  }
  return;
}

