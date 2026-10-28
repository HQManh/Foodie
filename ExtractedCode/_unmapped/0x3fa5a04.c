// rea decompile_all
// name: FUN_03fa5a04
// address: 0x3fa5a04
// body: available
// range: 0x3fa5a04-0x3fa5c37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fa5c34 to 0x3f5ef9c FUN_03f5ef9c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fa5a04(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  char *pcVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  if (*(long *)(param_1 + 0x38) == 0) {
    plVar4 = (long *)FUN_03fbd9f4();
    lVar6 = *plVar4;
    lVar15 = plVar4[1];
    uVar5 = FUN_03f943bc();
    if ((param_2 == 0) || (lVar15 != lVar6)) {
      lVar6 = lVar15 - lVar6 >> 5;
      puVar1 = &DAT_09535528;
      if ((uVar5 & 1) == 0) {
        puVar1 = &DAT_09535430;
      }
      lVar8 = FUN_03f984c8(*puVar1,lVar6);
      lVar11 = FUN_03f984c8(DAT_09535430,lVar6);
      lVar15 = *plVar4;
      if (plVar4[1] != lVar15) {
        lVar14 = 0;
        lVar16 = 0;
        lVar13 = lVar6 * 8 + 0x18;
        do {
          lVar6 = lVar6 + -1;
          uVar5 = FUN_03f943bc();
          if ((uVar5 & 1) == 0) {
            lVar12 = lVar6 * 8;
            *(undefined8 *)(lVar8 + lVar13) = *(undefined8 *)(lVar15 + lVar14);
          }
          else {
            lVar9 = thunk_FUN_03f9944c(DAT_09535528);
            puVar1 = (undefined8 *)(lVar15 + lVar14);
            uVar7 = FUN_03f9adc4(*puVar1,0);
            FUN_03f5ef9c(lVar9 + 0x28,uVar7);
            uVar2 = *(undefined4 *)((long)puVar1 + 0x14);
            pcVar10 = (char *)puVar1[3];
            *(undefined4 *)(lVar9 + 0x38) = *(undefined4 *)(puVar1 + 2);
            *(undefined4 *)(lVar9 + 0x10) = uVar2;
            if ((pcVar10 != (char *)0x0) && (*pcVar10 != '\0')) {
              uVar7 = FUN_03f967b4();
              FUN_03f5ef9c(lVar9 + 0x30,uVar7);
            }
            lVar12 = lVar13 + -0x20;
            *(long *)(lVar8 + lVar13) = lVar9;
            FUN_03f5d7b8(lVar8 + lVar13);
          }
          lVar9 = lVar15 + lVar14;
          lVar15 = *plVar4;
          lVar3 = plVar4[1];
          lVar16 = lVar16 + 1;
          lVar13 = lVar13 + -8;
          lVar14 = lVar14 + 0x20;
          *(undefined8 *)(lVar11 + 0x20 + lVar12) = *(undefined8 *)(lVar9 + 8);
        } while (lVar16 != lVar3 - lVar15 >> 5);
      }
    }
    else if ((uVar5 & 1) == 0) {
      lVar8 = FUN_03f984c8(DAT_09535430,1);
      lVar11 = 0;
      *(long *)(lVar8 + 0x20) = param_2;
    }
    else {
      lVar6 = thunk_FUN_03f9944c(DAT_09535528);
      uVar7 = FUN_03f9adc4(param_2,0);
      FUN_03f5ef9c(lVar6 + 0x28,uVar7);
      lVar8 = FUN_03f984c8(DAT_09535528,1);
      *(long *)(lVar8 + 0x20) = lVar6;
      FUN_03f5d7b8();
      lVar11 = 0;
    }
    FUN_03f5ef9c((long *)(param_1 + 0x38),lVar8);
    FUN_03f5ef9c(param_1 + 0x80,lVar11);
    return;
  }
  return;
}

