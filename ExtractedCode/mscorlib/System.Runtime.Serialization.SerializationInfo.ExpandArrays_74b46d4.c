// rea decompile_all
// name: System.Runtime.Serialization.SerializationInfo$$ExpandArrays
// address: 0x74b46d4
// body: available
// range: 0x74b46d4-0x74b481b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74b4818 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_SerializationInfo__ExpandArrays(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  if ((DAT_0952143b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_09180748);
    DAT_0952143b = 1;
  }
  iVar1 = *(int *)(param_1 + 0x30);
  iVar5 = -2;
  if (iVar1 != 0x7fffffff) {
    iVar5 = 0x7fffffff;
  }
  if (iVar1 < 0 == SBORROW4(iVar1 * 2,iVar1)) {
    iVar5 = iVar1 * 2;
  }
  uVar2 = FUN_03f5c394(DAT_091805f8,iVar5);
  uVar3 = FUN_03f5c394(DAT_09180318,iVar5);
  uVar4 = FUN_03f5c394(DAT_09180748,iVar5);
  puVar6 = (undefined8 *)(param_1 + 0x10);
  System_Array__Copy(*puVar6,uVar2,*(undefined4 *)(param_1 + 0x30),0);
  puVar7 = (undefined8 *)(param_1 + 0x18);
  System_Array__Copy(*puVar7,uVar3,*(undefined4 *)(param_1 + 0x30),0);
  puVar8 = (undefined8 *)(param_1 + 0x20);
  System_Array__Copy(*puVar8,uVar4,*(undefined4 *)(param_1 + 0x30),0);
  *puVar6 = uVar2;
  thunk_FUN_03f5d7b8(puVar6,uVar2);
  *puVar7 = uVar3;
  thunk_FUN_03f5d7b8(puVar7,uVar3);
  *puVar8 = uVar4;
  thunk_FUN_03f5d7b8(puVar8,uVar4);
  return;
}

