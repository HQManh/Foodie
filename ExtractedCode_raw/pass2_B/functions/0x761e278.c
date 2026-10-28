// rea decompile_all
// name: System.Threading.CancellationTokenSource$$.cctor
// address: 0x761e278
// body: available
// range: 0x761e278-0x761e407 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x761e404 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Threading_CancellationTokenSource___cctor(void)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  if ((DAT_0952210e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c48c0);
    FUN_03f5c2a4(&DAT_09182368);
    FUN_03f5c2a4(&DAT_091891b0);
    FUN_03f5c2a4(&DAT_0918be10);
    DAT_0952210e = 1;
  }
  lVar4 = thunk_FUN_03f9944c(DAT_09182368);
  thunk_FUN_03f6a5cc();
  *(undefined4 *)(lVar4 + 0x24) = 0xffffffff;
  System_Object___ctor(lVar4,0);
  thunk_FUN_03f6a5cc();
  *(undefined4 *)(lVar4 + 0x20) = 1;
  thunk_FUN_03f6a5cc();
  lVar1 = DAT_09182368;
  *(undefined4 *)(lVar4 + 0x20) = 3;
  **(long **)(lVar1 + 0xb8) = lVar4;
  thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09182368 + 0xb8),lVar4);
  lVar4 = thunk_FUN_03f9944c(DAT_09182368);
  thunk_FUN_03f6a5cc();
  *(undefined4 *)(lVar4 + 0x24) = 0xffffffff;
  System_Object___ctor(lVar4,0);
  thunk_FUN_03f6a5cc();
  *(undefined4 *)(lVar4 + 0x20) = 1;
  thunk_FUN_03f6a5cc();
  lVar1 = DAT_09182368;
  *(undefined4 *)(lVar4 + 0x20) = 0;
  plVar5 = (long *)(*(long *)(lVar1 + 0xb8) + 8);
  *plVar5 = lVar4;
  thunk_FUN_03f5d7b8(plVar5,lVar4);
  if (*(int *)(DAT_091891b0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar2 = System_Threading_PlatformHelper__get_ProcessorCount();
  if (iVar2 < 0x19) {
    if (*(int *)(DAT_091891b0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_Threading_PlatformHelper__get_ProcessorCount();
  }
  else {
    uVar3 = 0x18;
  }
  uVar6 = DAT_0918be10;
  *(undefined4 *)(*(long *)(DAT_09182368 + 0xb8) + 0x10) = uVar3;
  uVar6 = thunk_FUN_03f9944c(uVar6);
  System_Threading_TimerCallback___ctor(uVar6,0,DAT_091c48c0,0);
  puVar7 = (undefined8 *)(*(long *)(DAT_09182368 + 0xb8) + 0x18);
  *puVar7 = uVar6;
  thunk_FUN_03f5d7b8(puVar7,uVar6);
  return;
}

