// rea decompile_all
// name: FUN_03f8a05c
// address: 0x3f8a05c
// body: available
// range: 0x3f8a05c-0x3f8a19b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3f8a188 to 0x3fe0300 FUN_03fe0300 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03f8a05c(long param_1)

{
  code *pcVar1;
  undefined8 *__dest;
  size_t __n;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  do {
    iVar3 = (int)uVar4;
    uVar4 = FUN_0404bd00(uVar4,iVar3 + 1,param_1 + 0x20);
    iVar2 = (int)uVar4;
    if (iVar2 == iVar3) break;
  } while (iVar2 != 2);
  while (iVar2 != 0) {
    FUN_03fe02a8(param_1 + 0x20,2,0xffffffff);
    iVar2 = FUN_0404be70(2,param_1 + 0x20);
  }
  do {
    __dest = *(undefined8 **)(param_1 + 0x60);
    if (__dest == *(undefined8 **)(param_1 + 0x68)) {
      iVar3 = FUN_0404bea0(0,param_1 + 0x20);
      if (iVar3 != 2) {
        return;
      }
      FUN_03fe0300(param_1 + 0x20,1,0);
      return;
    }
    pcVar1 = (code *)*__dest;
    uVar4 = __dest[1];
    __n = (long)*(undefined8 **)(param_1 + 0x68) - (long)(__dest + 2);
    if (__n != 0) {
      memmove(__dest,__dest + 2,__n);
    }
    *(size_t *)(param_1 + 0x68) = (long)__dest + __n;
    iVar3 = FUN_0404bea0(0,param_1 + 0x20);
    if (iVar3 == 2) {
      FUN_03fe0300(param_1 + 0x20,1,0);
    }
    (*pcVar1)(uVar4);
    uVar4 = 0;
    do {
      iVar3 = (int)uVar4;
      uVar4 = FUN_0404bd00(uVar4,iVar3 + 1,param_1 + 0x20);
      if ((int)uVar4 == iVar3) break;
    } while ((int)uVar4 != 2);
    while ((int)uVar4 != 0) {
      FUN_03fe02a8(param_1 + 0x20,2,0xffffffff);
      uVar4 = FUN_0404be70(2,param_1 + 0x20);
    }
  } while( true );
}

