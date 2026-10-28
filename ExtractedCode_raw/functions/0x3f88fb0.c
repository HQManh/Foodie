// rea decompile_all
// name: FUN_03f88fb0
// address: 0x3f88fb0
// body: available
// range: 0x3f88fb0-0x3f89103 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_03f88fb0(long param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  double dVar5;
  
  iVar2 = FUN_0404bf60(0xffffffff,param_1 + 0xb8);
  if (iVar2 < 1) {
    iVar2 = *(int *)(param_1 + 0x78);
    do {
      if (iVar2 < 1) {
        uVar4 = FUN_03fe05d4();
        dVar5 = ((double)param_2 * 1000000.0) / DAT_09749378;
        do {
          FUN_03fe02a8(param_1 + 0x78,0,param_2);
          iVar2 = *(int *)(param_1 + 0x78);
          while (0 < iVar2) {
            iVar3 = FUN_0404bd00(iVar2,iVar2 + -1,param_1 + 0x78);
            bVar1 = iVar3 == iVar2;
            iVar2 = iVar3;
            if (bVar1) {
              return 1;
            }
          }
          param_2 = FUN_03f89200(uVar4,(long)dVar5);
        } while (param_2 != 0);
        do {
          do {
            iVar2 = *(int *)(param_1 + 0xb8);
            while (iVar2 < 0) {
              iVar3 = FUN_0404bcc0(iVar2,iVar2 + 1,param_1 + 0xb8);
              bVar1 = iVar3 == iVar2;
              iVar2 = iVar3;
              if (bVar1) {
                return 0;
              }
            }
            sched_yield();
            iVar2 = *(int *)(param_1 + 0x78);
          } while (*(int *)(param_1 + 0x78) < 1);
          do {
            iVar3 = FUN_0404bd00(iVar2,iVar2 + -1,param_1 + 0x78);
            if (iVar3 == iVar2) {
              return 1;
            }
            iVar2 = iVar3;
          } while (0 < iVar3);
        } while( true );
      }
      iVar3 = FUN_0404bd00(iVar2,iVar2 + -1,param_1 + 0x78);
      bVar1 = iVar3 != iVar2;
      iVar2 = iVar3;
    } while (bVar1);
  }
  return 1;
}

