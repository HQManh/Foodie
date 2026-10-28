// rea decompile_all
// name: System.Text.Encoding.DefaultDecoder$$.ctor
// address: 0x74506dc
// body: available
// range: 0x74506dc-0x7450943 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7450814 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74508d8 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7450940 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Text_Encoding_DefaultDecoder___ctor(long param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  
  if ((DAT_095210eb & 1) == 0) {
    FUN_03f5c2a4(&DAT_09171540);
    FUN_03f5c2a4(&DAT_09183800);
    FUN_03f5c2a4(&DAT_09171680);
    FUN_03f5c2a4(&DAT_09183fb8);
    FUN_03f5c2a4(&DAT_0921af60);
    FUN_03f5c2a4(&DAT_09216e60);
    DAT_095210eb = 1;
  }
  System_Text_Decoder___ctor(param_1,0);
  uVar3 = DAT_09171680;
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar3 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_0921d490);
    System_ArgumentNullException___ctor(uVar3,uVar5,0);
    uVar5 = thunk_FUN_03fc39d4(&DAT_091e96f0);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar3,uVar5);
  }
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = System_Type__GetTypeFromHandle(uVar3,0);
  plVar4 = (long *)System_Runtime_Serialization_SerializationInfo__GetValue
                             (param_2,DAT_0921af60,uVar3,0);
  lVar2 = DAT_09183fb8;
  if (plVar4 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  else {
    bVar1 = *(byte *)(DAT_09183fb8 + 0x130);
    if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != DAT_09183fb8)) {
LAB_07450810:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(plVar4);
    }
    *(long **)(param_1 + 0x20) = plVar4;
    if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != lVar2)) goto LAB_07450810;
  }
  thunk_FUN_03f5d7b8(param_1 + 0x20,plVar4);
  uVar3 = DAT_09171540;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = System_Type__GetTypeFromHandle(uVar3,0);
  plVar4 = (long *)System_Runtime_Serialization_SerializationInfo__GetValue
                             (param_2,DAT_09216e60,uVar3,0);
  lVar2 = DAT_09183800;
  if (plVar4 != (long *)0x0) {
    bVar1 = *(byte *)(DAT_09183800 + 0x130);
    if ((bVar1 <= *(byte *)(*plVar4 + 0x130)) &&
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) == DAT_09183800)) {
      *(long **)(param_1 + 0x10) = plVar4;
      if ((bVar1 <= *(byte *)(*plVar4 + 0x130)) &&
         (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) == lVar2)) goto LAB_074508e4;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c8d0(plVar4);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
LAB_074508e4:
  thunk_FUN_03f5d7b8(param_1 + 0x10,plVar4);
  return;
}

