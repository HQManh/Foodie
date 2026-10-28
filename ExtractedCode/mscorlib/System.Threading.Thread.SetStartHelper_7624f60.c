// rea decompile_all
// name: System.Threading.Thread$$SetStartHelper
// address: 0x7624f60
// body: available
// range: 0x7624f60-0x762508b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7625088 to 0x76256d4 System.Threading.Thread$$SetStart (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Threading_Thread__SetStartHelper(undefined8 param_1,long *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((DAT_09522169 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188e70);
    FUN_03f5c2a4(&DAT_091db4c0);
    FUN_03f5c2a4(&DAT_091db4b8);
    FUN_03f5c2a4(&DAT_0918bcd0);
    FUN_03f5c2a4(&DAT_0918bd18);
    DAT_09522169 = 1;
  }
  uVar1 = System_Threading_Thread__GetProcessDefaultStackSize(param_3);
  lVar2 = thunk_FUN_03f9944c(DAT_0918bcd0);
  System_Object___ctor(lVar2,0);
  *(long *)(lVar2 + 0x10) = (long)param_2;
  thunk_FUN_03f5d7b8((long *)(lVar2 + 0x10),param_2);
  if (param_2 != (long *)0x0) {
    if (*param_2 == DAT_0918bd18) {
      uVar3 = thunk_FUN_03f9944c();
      System_Threading_ThreadStart___ctor(uVar3,lVar2,DAT_091db4b8,0);
      goto LAB_07625070;
    }
  }
  uVar3 = thunk_FUN_03f9944c(DAT_09188e70);
  System_Threading_ParameterizedThreadStart___ctor(uVar3,lVar2,DAT_091db4c0,0);
LAB_07625070:
  System_Threading_Thread__SetStart(param_1,uVar3,uVar1);
  return;
}

