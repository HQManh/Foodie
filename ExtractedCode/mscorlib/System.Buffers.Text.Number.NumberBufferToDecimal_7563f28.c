// rea decompile_all
// name: System.Buffers.Text.Number$$NumberBufferToDecimal
// address: 0x7563f28
// body: available
// range: 0x7563f28-0x75640fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_Buffers_Text_Number__NumberBufferToDecimal(int *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 local_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  
  iVar5 = *param_1;
  pbVar6 = (byte *)((long)param_1 + 5);
  local_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  if (*pbVar6 != 0) {
    if (0x1d < iVar5) {
      return 0;
    }
    while ((0 < iVar5 || ((bVar3 = *pbVar6, -0x1c < iVar5 && (bVar3 != 0))))) {
      if (0x19999998 < uStack_4c) {
        if (uStack_4c != 0x19999999) {
LAB_07564014:
          bVar3 = *pbVar6;
          break;
        }
        if (0x99999998 < uStack_44) {
          if (uStack_44 != 0x99999999) goto LAB_07564014;
          if (0x99999998 < uStack_48) {
            if (uStack_48 != 0x99999999) goto LAB_07564014;
            if (0x35 < *pbVar6) goto LAB_07564058;
          }
        }
      }
      System_DecimalDecCalc__DecMul10(&local_50,0);
      bVar3 = *pbVar6;
      if (bVar3 != 0) {
        pbVar6 = pbVar6 + 1;
        System_DecimalDecCalc__DecAddInt32(&local_50,bVar3 - 0x30,0);
      }
      iVar5 = iVar5 + -1;
    }
    if (bVar3 < 0x35) goto LAB_07564090;
    if ((bVar3 == 0x35) && ((pbVar6[-1] & 1) == 0)) {
      lVar4 = 1;
      goto LAB_07564030;
    }
    goto LAB_07564058;
  }
  if (iVar5 < 1) goto LAB_075640a0;
  iVar5 = 0;
  goto LAB_075640a8;
  while (lVar4 = lVar4 + 1, *pbVar1 == 0x30) {
LAB_07564030:
    pbVar1 = pbVar6 + lVar4;
    iVar2 = (int)lVar4;
    if (iVar2 == 0x15) break;
  }
  if ((iVar2 != 0x15) && (*pbVar1 != 0)) {
LAB_07564058:
    System_DecimalDecCalc__DecAddInt32(&local_50,1,0);
    if ((uStack_44 == 0 && uStack_4c == 0) && uStack_48 == 0) {
      iVar5 = iVar5 + 1;
      uStack_44 = 0x99999999;
      uStack_4c = 0x19999999;
      uStack_48 = 0x9999999a;
    }
  }
LAB_07564090:
  if (0 < iVar5) {
    return 0;
  }
LAB_075640a0:
  if (iVar5 < -0x1c) {
    iVar5 = 0x1c;
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_4c = 0;
    goto LAB_075640bc;
  }
LAB_075640a8:
  iVar5 = -iVar5;
LAB_075640bc:
  System_MutableDecimal__set_Scale(&local_50,iVar5,0);
  System_MutableDecimal__set_IsNegative(&local_50,(char)param_1[1],0);
  param_2[1] = CONCAT44(uStack_44,uStack_48);
  *param_2 = CONCAT44(uStack_4c,local_50);
  return 1;
}

