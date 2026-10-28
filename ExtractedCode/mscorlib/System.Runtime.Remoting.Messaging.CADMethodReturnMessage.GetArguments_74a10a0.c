// rea decompile_all
// name: System.Runtime.Remoting.Messaging.CADMethodReturnMessage$$GetArguments
// address: 0x74a10a0
// body: available
// range: 0x74a10a0-0x74a11e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74a11a0 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74a11e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_Runtime_Remoting_Messaging_CADMethodReturnMessage__GetArguments(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  if ((DAT_0952137f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181588);
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_09188030);
    FUN_03f5c2a4(&DAT_09180318);
    DAT_0952137f = 1;
  }
  plVar5 = (long *)(param_1 + 0x18);
  if (*plVar5 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_03f5c394(DAT_0917fc88,*(undefined4 *)(*plVar5 + 0x18));
    lVar4 = *plVar5;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    System_Array__Copy(lVar4,uVar1,*(undefined4 *)(lVar4 + 0x18),0);
    uVar2 = thunk_FUN_03f9944c(DAT_09188030);
    System_IO_MemoryStream___ctor(uVar2,uVar1,0);
    lVar4 = System_Runtime_Remoting_Channels_CADSerializer__DeserializeObject(uVar2);
    uVar1 = thunk_FUN_03f9944c(DAT_09181588);
    uVar2 = DAT_09180318;
    if (lVar4 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = thunk_FUN_03f99350(lVar4,DAT_09180318);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(lVar4,uVar2);
      }
    }
    System_Collections_ArrayList___ctor(uVar1,lVar3,0);
    *plVar5 = 0;
    thunk_FUN_03f5d7b8(plVar5,0);
  }
  return uVar1;
}

