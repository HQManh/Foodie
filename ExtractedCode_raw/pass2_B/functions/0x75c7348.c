// rea decompile_all
// name: System.Random$$InternalSample
// address: 0x75c7348
// body: available
// range: 0x75c7348-0x75c734b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Random__InternalSample(long param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int iVar5;
  ulong uVar4;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar2 = (int)*(undefined8 *)(param_1 + 0x10) + 1;
  iVar5 = (int)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20) + 1;
  iVar7 = -(uint)(iVar2 < 0x38);
  iVar8 = -(uint)(iVar5 < 0x38);
  uVar4 = CONCAT44(iVar5,iVar2) & CONCAT44(iVar8,iVar7);
  iVar2 = CONCAT13(~(byte)((uint)iVar7 >> 0x18),
                   CONCAT12(~(byte)((uint)iVar7 >> 0x10),
                            CONCAT11(~(byte)((uint)iVar7 >> 8),~(byte)iVar7)));
  uVar3 = (int)uVar4 - iVar2;
  uVar6 = (int)(uVar4 >> 0x20) -
          (int)(CONCAT17(~(byte)((uint)iVar8 >> 0x18),
                         CONCAT16(~(byte)((uint)iVar8 >> 0x10),
                                  CONCAT15(~(byte)((uint)iVar8 >> 8),CONCAT14(~(byte)iVar8,iVar2))))
               >> 0x20);
  if ((uVar3 < *(uint *)(lVar1 + 0x18)) && (uVar6 < *(uint *)(lVar1 + 0x18))) {
    lVar1 = lVar1 + 0x20;
    iVar5 = *(int *)(lVar1 + (long)(int)uVar3 * 4) - *(int *)(lVar1 + (long)(int)uVar6 * 4);
    iVar2 = iVar5 + 0x7fffffff;
    if (-1 < iVar5) {
      iVar2 = iVar5;
    }
    iVar7 = 0x7ffffffe;
    if (iVar5 != 0x7fffffff) {
      iVar7 = iVar2;
    }
    *(int *)(lVar1 + (long)(int)uVar3 * 4) = iVar7;
    *(ulong *)(param_1 + 0x10) = CONCAT44(uVar6,uVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

