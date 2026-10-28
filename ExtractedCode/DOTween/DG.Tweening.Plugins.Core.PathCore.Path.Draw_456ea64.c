// rea decompile_all
// name: DG.Tweening.Plugins.Core.PathCore.Path$$Draw
// address: 0x456ea64
// body: available
// range: 0x456ea64-0x456ea67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Plugins_Core_PathCore_Path__Draw(long param_1)

{
  undefined4 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auStack_2c0 [112];
  undefined1 auStack_250 [112];
  undefined1 auStack_1e0 [112];
  undefined1 auStack_170 [112];
  undefined1 auStack_100 [112];
  
  if ((DAT_0951888a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b7648);
    FUN_03f5c2a4(&DAT_091b7650);
    DAT_0951888a = 1;
  }
  if (param_1 == 0) goto LAB_0456ee74;
  if (*(long *)(param_1 + 0x40) == 0) {
    return;
  }
  uVar10 = *(undefined4 *)(param_1 + 0x10c);
  uVar9 = *(undefined4 *)(param_1 + 0x110);
  uVar8 = *(undefined4 *)(param_1 + 0x114);
  fVar11 = *(float *)(param_1 + 0x118);
  UnityEngine_Gizmos__set_color(uVar10,uVar9,uVar8,fVar11,0);
  if (*(long *)(param_1 + 0x18) == 0) goto LAB_0456ee74;
  uVar6 = *(ulong *)(*(long *)(param_1 + 0x18) + 0x18);
  uVar4 = uVar6 & 0xffffffff;
  fVar11 = fVar11 * 0.5;
  iVar5 = (int)uVar6;
  if (*(char *)(param_1 + 0xe0) == '\0') {
    if (*(int *)(param_1 + 0x20) == 0) goto LAB_0456ec38;
    if (*(long *)(param_1 + 0xe8) == 0) {
      *(undefined1 *)(param_1 + 0xe0) = 0;
      goto LAB_0456eb2c;
    }
LAB_0456eb4c:
    lVar2 = *(long *)(param_1 + 0xe8);
    if (lVar2 == 0) goto LAB_0456ee74;
    if (*(int *)(lVar2 + 0x18) == 0) goto LAB_0456ee78;
    uVar12 = *(undefined4 *)(lVar2 + 0x20);
    uVar13 = *(undefined4 *)(lVar2 + 0x24);
    uVar14 = *(undefined4 *)(lVar2 + 0x28);
    memcpy(auStack_1e0,(void *)(param_1 + 0x58),0x70);
    DG_Tweening_Plugins_Core_PathCore_Path__ConvertToDrawPoint(uVar12,uVar13,uVar14,auStack_1e0);
    if (*(long *)(param_1 + 0xe8) == 0) goto LAB_0456ee74;
    uVar6 = *(ulong *)(*(long *)(param_1 + 0xe8) + 0x18);
    if (1 < (int)uVar6) {
      uVar7 = 1;
      lVar2 = 0x34;
      do {
        lVar3 = *(long *)(param_1 + 0xe8);
        if (lVar3 == 0) goto LAB_0456ee74;
        if (*(uint *)(lVar3 + 0x18) <= uVar7) goto LAB_0456ee78;
        puVar1 = (undefined4 *)(lVar3 + lVar2);
        uVar12 = puVar1[-2];
        uVar13 = puVar1[-1];
        uVar14 = *puVar1;
        memcpy(auStack_250,(void *)(param_1 + 0x58),0x70);
        DG_Tweening_Plugins_Core_PathCore_Path__ConvertToDrawPoint(uVar12,uVar13,uVar14,auStack_250)
        ;
        UnityEngine_Gizmos__DrawLine(0);
        uVar7 = uVar7 + 1;
        lVar2 = lVar2 + 0xc;
      } while ((uVar6 & 0xffffffff) != uVar7);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0xe0) = 0;
    if (*(int *)(param_1 + 0x20) != 0) {
LAB_0456eb2c:
      DG_Tweening_Plugins_Core_PathCore_Path__RefreshNonLinearDrawWps(param_1);
      if (*(int *)(param_1 + 0x20) != 0) goto LAB_0456eb4c;
    }
LAB_0456ec38:
    lVar2 = *(long *)(param_1 + 0x18);
    if (lVar2 == 0) {
LAB_0456ee74:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(int *)(lVar2 + 0x18) == 0) {
LAB_0456ee78:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    uVar12 = *(undefined4 *)(lVar2 + 0x20);
    uVar13 = *(undefined4 *)(lVar2 + 0x24);
    uVar14 = *(undefined4 *)(lVar2 + 0x28);
    memcpy(auStack_100,(void *)(param_1 + 0x58),0x70);
    DG_Tweening_Plugins_Core_PathCore_Path__ConvertToDrawPoint(uVar12,uVar13,uVar14,auStack_100);
    if (iVar5 < 1) {
      UnityEngine_Gizmos__set_color(uVar10,uVar9,uVar8,fVar11,0);
      goto LAB_0456edb8;
    }
    uVar6 = 0;
    lVar2 = 0x20;
    do {
      lVar3 = *(long *)(param_1 + 0x18);
      if (lVar3 == 0) goto LAB_0456ee74;
      if (*(uint *)(lVar3 + 0x18) <= uVar6) goto LAB_0456ee78;
      puVar1 = (undefined4 *)(lVar3 + lVar2);
      uVar14 = *puVar1;
      uVar13 = puVar1[1];
      uVar12 = puVar1[2];
      memcpy(auStack_170,(void *)(param_1 + 0x58),0x70);
      DG_Tweening_Plugins_Core_PathCore_Path__ConvertToDrawPoint(uVar14,uVar13,uVar12,auStack_170);
      UnityEngine_Gizmos__DrawLine(0);
      uVar6 = uVar6 + 1;
      lVar2 = lVar2 + 0xc;
    } while (uVar4 != uVar6);
  }
  UnityEngine_Gizmos__set_color(uVar10,uVar9,uVar8,fVar11,0);
  if (0 < iVar5) {
    uVar6 = 0;
    lVar2 = 0x20;
    do {
      lVar3 = *(long *)(param_1 + 0x18);
      if (lVar3 == 0) goto LAB_0456ee74;
      if (*(uint *)(lVar3 + 0x18) <= uVar6) goto LAB_0456ee78;
      puVar1 = (undefined4 *)(lVar3 + lVar2);
      uVar10 = *puVar1;
      uVar9 = puVar1[1];
      uVar8 = puVar1[2];
      memcpy(auStack_2c0,(void *)(param_1 + 0x58),0x70);
      DG_Tweening_Plugins_Core_PathCore_Path__ConvertToDrawPoint(uVar10,uVar9,uVar8,auStack_2c0);
      UnityEngine_Gizmos__DrawSphere(0);
      uVar6 = uVar6 + 1;
      lVar2 = lVar2 + 0xc;
    } while (uVar4 != uVar6);
  }
LAB_0456edb8:
  if (*(char *)(param_1 + 0xfc) == '\0') {
    return;
  }
  uVar10 = FUN_05c3a634((char *)(param_1 + 0xfc),DAT_091b7650);
  UnityEngine_Gizmos__DrawLine
            (*(undefined4 *)(param_1 + 0xf0),*(undefined4 *)(param_1 + 0xf4),
             *(undefined4 *)(param_1 + 0xf8),uVar10,uVar9,uVar8,0);
  UnityEngine_Gizmos__DrawWireSphere(uVar10,uVar9,uVar8,0x3d99999a,0);
  return;
}

