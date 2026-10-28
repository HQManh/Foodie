// rea decompile_all
// name: System.Guid$$TryFormat
// address: 0x75afd54
// body: available
// range: 0x75afd54-0x75b0173 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75afec8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool System_Guid__TryFormat
               (int *param_1,undefined8 param_2,undefined8 param_3,int *param_4,ushort *param_5,
               int param_6)

{
  undefined1 uVar1;
  undefined1 uVar2;
  ushort uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  int iVar15;
  
  if ((DAT_09521ca8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d3038);
    FUN_03f5c2a4(&DAT_091b9810);
    FUN_03f5c2a4(&DAT_091ba998);
    FUN_03f5c2a4(&DAT_091ffb80);
    DAT_09521ca8 = 1;
  }
  lVar7 = DAT_091ffb80;
  if (param_6 == 0) {
    if (DAT_09519f66 == '\0') {
      FUN_03f5c2a4(&DAT_091b97b8);
      DAT_09519f66 = '\x01';
    }
    if (lVar7 == 0) goto LAB_075afe84;
    param_5 = (ushort *)System_String__GetRawStringData(lVar7,0);
    param_6 = *(int *)(lVar7 + 0x10);
  }
  if (param_6 != 1) {
LAB_075afe84:
    thunk_FUN_03fc39d4(&DAT_09184908);
    uVar8 = thunk_FUN_03f9944c();
    uVar9 = thunk_FUN_03fc39d4(&DAT_09202d70);
    System_FormatException___ctor(uVar8,uVar9,0);
    uVar9 = thunk_FUN_03fc39d4(&DAT_091ce4b8);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar8,uVar9);
  }
  uVar3 = *param_5;
  if (uVar3 < 0x59) {
    if (uVar3 < 0x45) {
      if (uVar3 != 0x42) {
        if (uVar3 != 0x44) goto LAB_075afe84;
LAB_075afe54:
        uVar14 = 0;
        bVar5 = false;
        bVar4 = true;
        iVar15 = 0x24;
        bVar6 = true;
        goto LAB_075aff44;
      }
      goto LAB_075afef8;
    }
    if (uVar3 == 0x4e) {
LAB_075aff30:
      uVar14 = 0;
      bVar5 = false;
      bVar6 = false;
      bVar4 = true;
      iVar15 = 0x20;
      goto LAB_075aff44;
    }
    if (uVar3 == 0x50) {
LAB_075aff14:
      bVar4 = false;
      bVar5 = false;
      bVar6 = true;
      iVar15 = 0x26;
      uVar14 = 0x290028;
      goto LAB_075aff44;
    }
    if (uVar3 != 0x58) goto LAB_075afe84;
LAB_075afee4:
    bVar6 = false;
    bVar5 = true;
    iVar15 = 0x44;
  }
  else {
    if (100 < uVar3) {
      if (uVar3 == 0x6e) goto LAB_075aff30;
      if (uVar3 == 0x70) goto LAB_075aff14;
      if (uVar3 != 0x78) goto LAB_075afe84;
      goto LAB_075afee4;
    }
    if (uVar3 != 0x62) {
      if (uVar3 != 100) goto LAB_075afe84;
      goto LAB_075afe54;
    }
LAB_075afef8:
    bVar5 = false;
    bVar6 = true;
    iVar15 = 0x26;
  }
  bVar4 = false;
  uVar14 = 0x7d007b;
LAB_075aff44:
  if ((int)param_3 < iVar15) {
    iVar12 = 0;
  }
  else {
    puVar10 = (undefined4 *)FUN_04c072b8(param_2,param_3,DAT_091d3038);
    puVar13 = puVar10;
    if (!bVar4) {
      puVar13 = (undefined4 *)((long)puVar10 + 2);
      *(short *)puVar10 = (short)uVar14;
    }
    if (bVar5) {
      *puVar13 = 0x780030;
      System_Guid__HexsToChars(puVar13 + 1,*param_1 >> 0x18,*param_1 >> 0x10);
      System_Guid__HexsToChars(puVar13 + 3,*param_1 >> 8);
      *(undefined2 *)(puVar13 + 6) = 0x78;
      puVar13[5] = 0x30002c;
      System_Guid__HexsToChars((long)puVar13 + 0x1a,(int)(short)param_1[1] >> 8);
      *(undefined4 *)((long)puVar13 + 0x22) = 0x30002c;
      *(undefined2 *)((long)puVar13 + 0x26) = 0x78;
      System_Guid__HexsToChars(puVar13 + 10,(int)*(short *)((long)param_1 + 6) >> 8);
      puVar13[0xc] = 0x7b002c;
      System_Guid__HexsToCharsHexOutput
                (puVar13 + 0xd,(char)param_1[2],*(undefined1 *)((long)param_1 + 9));
      uVar1 = *(undefined1 *)((long)param_1 + 10);
      uVar2 = *(undefined1 *)((long)param_1 + 0xb);
      *(undefined2 *)((long)puVar13 + 0x46) = 0x2c;
      System_Guid__HexsToCharsHexOutput(puVar13 + 0x12,uVar1,uVar2);
      iVar12 = param_1[3];
      uVar1 = *(undefined1 *)((long)param_1 + 0xd);
      *(undefined2 *)((long)puVar13 + 0x5a) = 0x2c;
      System_Guid__HexsToCharsHexOutput(puVar13 + 0x17,(char)iVar12,uVar1);
      uVar1 = *(undefined1 *)((long)param_1 + 0xe);
      uVar2 = *(undefined1 *)((long)param_1 + 0xf);
      *(undefined2 *)((long)puVar13 + 0x6e) = 0x2c;
      System_Guid__HexsToCharsHexOutput(puVar13 + 0x1c,uVar1,uVar2);
      puVar11 = puVar13 + 0x21;
      *(undefined2 *)((long)puVar13 + 0x82) = 0x7d;
    }
    else {
      System_Guid__HexsToChars(puVar13,*param_1 >> 0x18,*param_1 >> 0x10);
      System_Guid__HexsToChars(puVar13 + 2,*param_1 >> 8);
      if (bVar6) {
        puVar10 = (undefined4 *)((long)puVar13 + 0x12);
        *(undefined2 *)(puVar13 + 4) = 0x2d;
      }
      else {
        puVar10 = puVar13 + 4;
      }
      System_Guid__HexsToChars(puVar10,(int)(short)param_1[1] >> 8);
      if (bVar6) {
        puVar13 = (undefined4 *)((long)puVar10 + 10);
        *(undefined2 *)(puVar10 + 2) = 0x2d;
      }
      else {
        puVar13 = puVar10 + 2;
      }
      System_Guid__HexsToChars(puVar13,(int)*(short *)((long)param_1 + 6) >> 8);
      if (bVar6) {
        puVar10 = (undefined4 *)((long)puVar13 + 10);
        *(undefined2 *)(puVar13 + 2) = 0x2d;
      }
      else {
        puVar10 = puVar13 + 2;
      }
      System_Guid__HexsToChars(puVar10,(char)param_1[2],*(undefined1 *)((long)param_1 + 9));
      if (bVar6) {
        puVar11 = (undefined4 *)((long)puVar10 + 10);
        *(undefined2 *)(puVar10 + 2) = 0x2d;
      }
      else {
        puVar11 = puVar10 + 2;
      }
      System_Guid__HexsToChars
                (puVar11,*(undefined1 *)((long)param_1 + 10),*(undefined1 *)((long)param_1 + 0xb));
      System_Guid__HexsToChars(puVar11 + 2,(char)param_1[3],*(undefined1 *)((long)param_1 + 0xd));
      System_Guid__HexsToChars
                (puVar11 + 4,*(undefined1 *)((long)param_1 + 0xe),
                 *(undefined1 *)((long)param_1 + 0xf));
      puVar11 = puVar11 + 6;
    }
    iVar12 = iVar15;
    if (!bVar4) {
      *(short *)puVar11 = (short)((uint)uVar14 >> 0x10);
    }
  }
  *param_4 = iVar12;
  return iVar15 <= (int)param_3;
}

