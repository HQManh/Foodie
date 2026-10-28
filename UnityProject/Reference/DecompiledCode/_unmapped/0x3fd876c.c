// rea decompile_all
// name: FUN_03fd876c
// address: 0x3fd876c
// body: available
// range: 0x3fd876c-0x3fd8893 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fd8878 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x3fd8890 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_03fd876c(long *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  pthread_t pVar4;
  long *plVar5;
  undefined4 uVar6;
  long lVar7;
  byte bVar8;
  
  pVar4 = pthread_self();
  if (DAT_097480e0 == 0) {
    (*(code *)PTR_FUN_09515620)("Threads explicit registering is not previously enabled");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  iVar2 = FUN_0404be40(1,&DAT_097480e8);
  if (iVar2 != 0) {
    FUN_03fcbfa4();
  }
  uVar1 = (uint)(pVar4 >> 8) ^ (uint)pVar4;
  plVar5 = (long *)(&DAT_09748ab0)[(ulong)(uVar1 ^ uVar1 >> 0x10) & 0xff];
  do {
    if (plVar5 == (long *)0x0) {
      plVar5 = (long *)FUN_03fd86e8(param_1,pVar4);
      bVar8 = *(byte *)((long)plVar5 + 0x20) | 2;
LAB_03fd8804:
      iVar2 = DAT_097480e0;
      uVar6 = 0;
      *(byte *)((long)plVar5 + 0x20) = bVar8;
      uVar3 = 0;
      if (iVar2 != 0) {
LAB_03fd880c:
        DAT_097480e8 = 0;
        uVar3 = uVar6;
      }
      return uVar3;
    }
    if (plVar5[1] == pVar4) {
      if ((*(byte *)(plVar5 + 4) & 1) == 0) {
        uVar6 = 1;
        if (DAT_097480e0 == 0) {
          return 1;
        }
        goto LAB_03fd880c;
      }
      lVar7 = *param_1;
      plVar5[3] = lVar7;
      plVar5[5] = lVar7;
      if (lVar7 == 0) {
        (*(code *)PTR_FUN_09515620)("Bad stack base in GC_register_my_thread");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      bVar8 = *(byte *)(plVar5 + 4) & 0xfe;
      goto LAB_03fd8804;
    }
    plVar5 = (long *)*plVar5;
  } while( true );
}

