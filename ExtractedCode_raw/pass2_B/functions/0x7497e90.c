// rea decompile_all
// name: System.Runtime.Remoting.Channels.ChannelServices$$.cctor
// address: 0x7497e90
// body: available
// range: 0x7497e90-0x749804b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7498040 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7498044 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7498048 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Remoting_Channels_ChannelServices___cctor(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  
  if ((DAT_09521336 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181588);
    FUN_03f5c2a4(&DAT_09182498);
    FUN_03f5c2a4(&DAT_09182f78);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_092090c8);
    FUN_03f5c2a4(&DAT_092090c0);
    FUN_03f5c2a4(&DAT_09216a98);
    DAT_09521336 = 1;
  }
  uVar1 = thunk_FUN_03f9944c(DAT_09181588);
  System_Collections_ArrayList___ctor(uVar1,0);
  **(undefined8 **)(DAT_09182498 + 0xb8) = uVar1;
  thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09182498 + 0xb8),uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_09181588);
  System_Collections_ArrayList___ctor(uVar1,0);
  puVar2 = (undefined8 *)(*(long *)(DAT_09182498 + 0xb8) + 8);
  *puVar2 = uVar1;
  thunk_FUN_03f5d7b8(puVar2,uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_09182f78);
  System_Object___ctor(uVar1,0);
  puVar2 = (undefined8 *)(*(long *)(DAT_09182498 + 0xb8) + 0x10);
  *puVar2 = uVar1;
  thunk_FUN_03f5d7b8(puVar2,uVar1);
  *(undefined8 *)(*(long *)(DAT_09182498 + 0xb8) + 0x18) = DAT_09216a98;
  thunk_FUN_03f5d7b8();
  lVar3 = FUN_03f5c394(DAT_091805f8,2);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) != 0) {
      *(undefined8 *)(lVar3 + 0x20) = DAT_092090c8;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x20));
      if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar3 + 0x28) = DAT_092090c0;
        thunk_FUN_03f5d7b8();
        plVar4 = (long *)(*(long *)(DAT_09182498 + 0xb8) + 0x20);
        *plVar4 = lVar3;
        thunk_FUN_03f5d7b8(plVar4,lVar3);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

