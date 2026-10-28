// rea decompile_all
// name: thunk_FUN_03f6a288
// address: 0x7625bfc
// body: available
// range: 0x7625bfc-0x7625bff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool thunk_FUN_03f6a288(long param_1,long param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  long lVar6;
  void *pvVar7;
  undefined8 uVar8;
  undefined1 auStack_28 [8];
  
  FUN_03f5d894(auStack_28,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + 0xa0) + 0x10));
  uVar2 = FUN_03faf5a0(param_1);
  if ((uVar2 >> 8 & 1) == 0) {
    plVar5 = (long *)FUN_03f5da88(0x28,0);
    *plVar5 = param_1;
    FUN_03f5d7b8();
    lVar6 = FUN_03faa758();
    plVar5[2] = param_2;
    plVar5[1] = lVar6;
    FUN_03f5d7b8(plVar5 + 2);
    plVar5[3] = *(long *)(param_1 + 0x18);
    FUN_03f5d7b8();
    pvVar7 = operator_new(8);
    FUN_03f869fc(pvVar7,0,1);
    lVar6 = *(long *)(param_1 + 0x10);
    plVar5[4] = (long)pvVar7;
    uVar8 = *(undefined8 *)(lVar6 + 0x18);
    FUN_03f86f74(uVar8,(long)*(int *)(lVar6 + 0xac));
    FUN_03f5c2c8(uVar8,*(undefined1 *)(*(long *)(param_1 + 0x10) + 0xb0));
    iVar3 = FUN_03f87010(uVar8,&LAB_03f6a400,plVar5);
    if (iVar3 != 0) {
      bVar1 = false;
      goto LAB_03f6a3b4;
    }
    *(uint *)(*(long *)(param_1 + 0x10) + 0x38) =
         *(uint *)(*(long *)(param_1 + 0x10) + 0x38) & 0xfffffff7;
    uVar8 = FUN_03f86f64(uVar8);
    lVar6 = *(long *)(param_1 + 0x10);
    *(undefined8 *)(lVar6 + 0x50) = uVar8;
    if (*(int *)(lVar6 + 0xb8) == 0) {
      uVar4 = FUN_03faebc0();
      *(undefined4 *)(*(long *)(param_1 + 0x10) + 0xb8) = uVar4;
    }
    FUN_03f86a58(plVar5[4],1,0);
  }
  bVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x18) != 0;
LAB_03f6a3b4:
  FUN_03f5d920(auStack_28);
  return bVar1;
}

