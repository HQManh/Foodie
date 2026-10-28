// rea decompile_all
// name: FUN_03fbc7f4
// address: 0x3fbc7f4
// body: available
// range: 0x3fbc7f4-0x3fbc96f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fbc7f4(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_40 [8];
  long local_38;
  undefined8 local_30;
  undefined8 *local_28;
  undefined8 local_18;
  
  FUN_03f5d894(auStack_40,&DAT_095356e0);
  DAT_09535798 = DAT_09535798 + -1;
  if (0 < DAT_09535798) goto LAB_03fbc958;
  lVar1 = FUN_03fbeccc(DAT_095354e8,"ProcessExit");
  if (lVar1 != 0) {
    plVar2 = (long *)FUN_03faa758();
    lVar4 = *plVar2;
    FUN_03fbaca0(*(undefined8 *)(lVar1 + 8),&local_28,lVar4 + *(int *)(lVar1 + 0x18),1);
    if (local_28 != (undefined8 *)0x0) {
      local_38 = lVar4;
      lVar1 = thunk_FUN_03fb4f8c(DAT_095353d8,"System","EventArgs");
      if (lVar1 == 0) {
LAB_03fbc8c4:
        local_18 = 0;
      }
      else {
        FUN_03fbea4c(lVar1);
        lVar1 = FUN_03fbeccc(lVar1,"Empty");
        if (lVar1 == 0) goto LAB_03fbc8c4;
        FUN_03fbb378(lVar1,&local_18,0);
      }
      local_30 = local_18;
      uVar3 = FUN_03fbef44(*local_28,"Invoke",0xffffffff);
      FUN_03fbcba4(uVar3,local_28,&local_38,&local_18);
    }
  }
  DAT_095357a8 = 1;
  FUN_03f66b40();
  FUN_03f8150c();
  FUN_03faef78();
  FUN_03fa7ff4();
  FUN_03f69c28();
  FUN_03f96738();
  FUN_03f5e9a0();
  FUN_03fae9dc();
  FUN_03f86e18();
  FUN_03f9d374();
  thunk_FUN_03fd65c8();
  FUN_03f867bc();
  FUN_03fb5a98();
  FUN_03fa7eac();
  FUN_03fa5790();
  FUN_03f5c2c8();
  FUN_03f5c2c8();
  FUN_03fa8458();
  FUN_03fadf1c();
  FUN_03f5c2c8();
  FUN_03f64dd0();
  FUN_03fbe540();
LAB_03fbc958:
  FUN_03f5d920(auStack_40);
  return;
}

