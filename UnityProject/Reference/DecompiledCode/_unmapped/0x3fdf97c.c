// rea decompile_all
// name: FUN_03fdf97c
// address: 0x3fdf97c
// body: available
// range: 0x3fdf97c-0x3fdfaa7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_03fdf97c(char *param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (((DAT_09749bc8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_09749bc8), iVar3 != 0)) {
    DAT_09749b80 = 1;
    DAT_09749b88 = 0;
    __cxa_guard_release(&DAT_09749bc8);
  }
  uVar6 = param_2[1];
  uVar5 = *param_2;
  uVar8 = param_2[3];
  uVar7 = param_2[2];
  uVar4 = 0;
  do {
    iVar3 = (int)uVar4;
    uVar4 = FUN_0404bd00(uVar4,iVar3 + 1,&DAT_09749b88);
    iVar2 = (int)uVar4;
    if (iVar2 == iVar3) break;
  } while (iVar2 != 2);
  while (iVar2 != 0) {
    FUN_03fe02a8(&DAT_09749b88,2,0xffffffff);
    iVar2 = FUN_0404be70(2,&DAT_09749b88);
  }
  lVar1 = DAT_09749b80 + 1;
  DAT_09749b80 = lVar1;
  local_40 = uVar5;
  uStack_38 = uVar6;
  uStack_30 = uVar7;
  uStack_28 = uVar8;
  vsnprintf(&DAT_09749380,0x800,param_1,&local_40);
  iVar3 = FUN_0404bea0(0,&DAT_09749b88);
  if (iVar3 == 2) {
    FUN_03fe0300(&DAT_09749b88,1,0);
  }
  return lVar1;
}

