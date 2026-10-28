// rea decompile_all
// name: System.Threading.Thread$$set_CurrentCulture
// address: 0x76258d0
// body: available
// range: 0x76258d0-0x7625abf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76259c8 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7625a70 to 0x63fa058 FUN_063fa058 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7625ab8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7625abc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Threading_Thread__set_CurrentCulture(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((DAT_0952216d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091743b0);
    FUN_03f5c2a4(&DAT_09181358);
    FUN_03f5c2a4(&DAT_09197390);
    FUN_03f5c2a4(&DAT_09197398);
    FUN_03f5c2a4(&DAT_09175050);
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_091db480);
    FUN_03f5c2a4(&DAT_0918bcc0);
    DAT_0952216d = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar3 = thunk_FUN_03f9944c();
    uVar4 = thunk_FUN_03fc39d4(&DAT_09225370);
    System_ArgumentNullException___ctor(uVar3,uVar4,0);
    uVar4 = thunk_FUN_03fc39d4(&DAT_091db4b0);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar3,uVar4);
  }
  lVar1 = FUN_03f5c2c0(DAT_0918bcc0);
  if (*(long *)(lVar1 + 8) == 0) {
    lVar1 = FUN_03f5c2c0(DAT_0918bcc0);
    if (*(long *)(lVar1 + 0x10) == 0) {
      System_Threading_Thread__nativeInitCultureAccessors();
    }
  }
  if (*(char *)(*(long *)(DAT_09181358 + 0xb8) + 1) != '\0') {
    lVar2 = FUN_03f5c2c0();
    lVar1 = DAT_0918bcc0;
    *(long *)(lVar2 + 8) = param_2;
    lVar1 = FUN_03f5c2c0(lVar1);
    thunk_FUN_03f5d7b8(lVar1 + 8,param_2);
    return;
  }
  lVar1 = *(long *)(*(long *)(DAT_0918bcc0 + 0xb8) + 8);
  if (lVar1 == 0) {
    uVar3 = thunk_FUN_03f9944c(DAT_091743b0);
    FUN_070a10e0(uVar3,0,DAT_091db480,0);
    uVar4 = thunk_FUN_03f9944c(DAT_09175050);
    FUN_063f9f78(uVar4,uVar3,DAT_09197390);
    FUN_03f955cc(*(long *)(DAT_0918bcc0 + 0xb8) + 8,uVar4,0);
    lVar1 = *(long *)(*(long *)(DAT_0918bcc0 + 0xb8) + 8);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  FUN_063fa058(lVar1,param_2,DAT_09197398);
  return;
}

