// rea decompile_all
// name: FUN_03fb41b4
// address: 0x3fb41b4
// body: available
// range: 0x3fb41b4-0x3fb43eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fb43e8 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fb41b4(undefined8 *param_1,code *param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  undefined8 *puVar4;
  char *pcVar5;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  ulong uVar6;
  byte bVar13;
  byte bVar14;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  ulong uVar15;
  byte bVar23;
  ulong uVar16;
  char acStack_460 [1024];
  undefined8 local_60;
  undefined1 local_58;
  undefined1 uStack_57;
  undefined1 uStack_56;
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  (*param_2)(*param_1,param_3);
  (*param_2)(", Version=",param_3);
  snprintf(acStack_460,0x400,"%d%s",(ulong)*(uint *)((long)param_1 + 0x24),&DAT_01a45099);
  (*param_2)(acStack_460,param_3);
  snprintf(acStack_460,0x400,"%d%s",(ulong)*(uint *)(param_1 + 5),&DAT_01a45099);
  (*param_2)(acStack_460,param_3);
  snprintf(acStack_460,0x400,"%d%s",(ulong)*(uint *)((long)param_1 + 0x2c),&DAT_01a45099);
  (*param_2)(acStack_460,param_3);
  snprintf(acStack_460,0x400,"%d",(ulong)*(uint *)((long)param_1 + 0x2c));
  (*param_2)(acStack_460,param_3);
  snprintf(acStack_460,0x400,"%d",(ulong)*(uint *)(param_1 + 6));
  (*param_2)(acStack_460,param_3);
  (*param_2)(", Culture=",param_3);
  pcVar5 = (char *)param_1[1];
  pcVar3 = "neutral";
  if ((pcVar5 != (char *)0x0) && (*pcVar5 != '\0')) {
    pcVar3 = pcVar5;
  }
  (*param_2)(pcVar3,param_3);
  (*param_2)(", PublicKeyToken=",param_3);
  if (*(char *)((long)param_1 + 0x34) == '\0') {
    puVar4 = (undefined8 *)&DAT_01a48046;
  }
  else {
    uVar15 = *(ulong *)((long)param_1 + 0x34);
    puVar4 = &local_60;
    uVar6 = uVar15 & 0xf0f0f0f0f0f0f0f;
    bVar14 = (byte)uVar15;
    bVar17 = (byte)(uVar15 >> 8);
    bVar18 = (byte)(uVar15 >> 0x10);
    bVar19 = (byte)(uVar15 >> 0x18);
    bVar20 = (byte)(uVar15 >> 0x20);
    bVar21 = (byte)(uVar15 >> 0x28);
    bVar22 = (byte)(uVar15 >> 0x30);
    bVar23 = (byte)(uVar15 >> 0x38);
    uVar16 = CONCAT17((bVar23 >> 4) + 0x57,
                      CONCAT16((bVar22 >> 4) + 0x57,
                               CONCAT15((bVar21 >> 4) + 0x57,
                                        CONCAT14((bVar20 >> 4) + 0x57,
                                                 CONCAT13((bVar19 >> 4) + 0x57,
                                                          CONCAT12((bVar18 >> 4) + 0x57,
                                                                   CONCAT11((bVar17 >> 4) + 0x57,
                                                                            (bVar14 >> 4) + 0x57))))
                                       )));
    bVar7 = (byte)(uVar6 >> 8);
    bVar8 = (byte)(uVar6 >> 0x10);
    bVar9 = (byte)(uVar6 >> 0x18);
    bVar10 = (byte)(uVar6 >> 0x20);
    bVar11 = (byte)(uVar6 >> 0x28);
    bVar12 = (byte)(uVar6 >> 0x30);
    bVar13 = (byte)(uVar6 >> 0x38);
    uVar15 = CONCAT17(bVar13 + 0x57,
                      CONCAT16(bVar12 + 0x57,
                               CONCAT15(bVar11 + 0x57,
                                        CONCAT14(bVar10 + 0x57,
                                                 CONCAT13(bVar9 + 0x57,
                                                          CONCAT12(bVar8 + 0x57,
                                                                   CONCAT11(bVar7 + 0x57,
                                                                            (byte)uVar6 + 0x57))))))
                     );
    uVar16 = uVar16 ^ (uVar16 ^ CONCAT17((bVar23 >> 4) + 0x30,
                                         CONCAT16((bVar22 >> 4) + 0x30,
                                                  CONCAT15((bVar21 >> 4) + 0x30,
                                                           CONCAT14((bVar20 >> 4) + 0x30,
                                                                    CONCAT13((bVar19 >> 4) + 0x30,
                                                                             CONCAT12((bVar18 >> 4)
                                                                                      + 0x30,
                                                  CONCAT11((bVar17 >> 4) + 0x30,(bVar14 >> 4) + 0x30
                                                          )))))))) &
                      CONCAT17(-(bVar23 < 0xa0),
                               CONCAT16(-(bVar22 < 0xa0),
                                        CONCAT15(-(bVar21 < 0xa0),
                                                 CONCAT14(-(bVar20 < 0xa0),
                                                          CONCAT13(-(bVar19 < 0xa0),
                                                                   CONCAT12(-(bVar18 < 0xa0),
                                                                            CONCAT11(-(bVar17 < 0xa0
                                                                                      ),-(bVar14 < 
                                                  0xa0))))))));
    uVar15 = uVar15 ^ (uVar15 ^ (uVar6 | 0x3030303030303030)) &
                      CONCAT17(-(bVar13 < 10),
                               CONCAT16(-(bVar12 < 10),
                                        CONCAT15(-(bVar11 < 10),
                                                 CONCAT14(-(bVar10 < 10),
                                                          CONCAT13(-(bVar9 < 10),
                                                                   CONCAT12(-(bVar8 < 10),
                                                                            CONCAT11(-(bVar7 < 10),
                                                                                     -((byte)uVar6 <
                                                                                      10))))))));
    local_60 = CONCAT17((char)(uVar15 >> 0x18),
                        CONCAT16((char)(uVar16 >> 0x18),
                                 CONCAT15((char)(uVar15 >> 0x10),
                                          CONCAT14((char)(uVar16 >> 0x10),
                                                   CONCAT13((char)(uVar15 >> 8),
                                                            CONCAT12((char)(uVar16 >> 8),
                                                                     CONCAT11((char)uVar15,
                                                                              (char)uVar16)))))));
    _local_58 = CONCAT17((char)(uVar15 >> 0x38),
                         CONCAT16((char)(uVar16 >> 0x38),
                                  CONCAT15((char)(uVar15 >> 0x30),
                                           CONCAT14((char)(uVar16 >> 0x30),
                                                    CONCAT13((char)(uVar15 >> 0x28),
                                                             CONCAT12((char)(uVar16 >> 0x28),
                                                                      CONCAT11((char)(uVar15 >> 0x20
                                                                                     ),(char)(uVar16
                                                                                             >> 0x20
                                                  ))))))));
  }
  (*param_2)(puVar4,param_3);
  pcVar3 = "";
  if ((*(uint *)(param_1 + 4) & 0x100) != 0) {
    pcVar3 = ", Retargetable=Yes";
  }
  (*param_2)(pcVar3,param_3);
  iVar2 = strcmp((char *)*param_1,"WindowsRuntimeMetadata");
  if (iVar2 == 0) {
    (*param_2)(", ContentType=WindowsRuntime",param_3);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

