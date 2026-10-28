// rea decompile_all
// name: FUN_03f93a50
// address: 0x3f93a50
// body: available
// range: 0x3f93a50-0x3f9401b inclusive
// range: 0x3f940d4-0x3f940ff inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3f940fc to 0x404c2dc FUN_0404c2dc (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_03f93a50(void)

{
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  char *__s;
  size_t __n;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined4 uVar11;
  void *local_d0;
  ulong local_c8;
  void *local_c0;
  byte local_b8 [8];
  ulong local_b0;
  void *local_a8;
  char *local_a0;
  undefined8 uStack_98;
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  void *local_70;
  ulong local_68;
  void *local_60;
  byte local_58;
  undefined1 uStack_57;
  undefined6 uStack_56;
  ulong uStack_50;
  void *local_48;
  int local_34;
  
  local_34 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = (void *)0x0;
  local_a0 = "il2cpp.usym";
  uStack_98 = 0xb;
  FUN_03f8f214(local_b8);
  uVar9 = (ulong)(local_b8[0] >> 1);
  if ((local_b8[0] & 1) != 0) {
    uVar9 = local_b0;
  }
  if (uVar9 == 0) {
    uVar7 = 0;
    uVar9 = 0;
  }
  else {
    local_70 = (void *)((ulong)local_b8 | 1);
    if ((local_b8[0] & 1) != 0) {
      local_70 = local_a8;
    }
    local_68 = uVar9;
    FUN_03f67944(&local_58,&local_70,&local_a0);
    if ((local_90 & 1) != 0) {
      operator_delete(local_80);
    }
    local_90 = CONCAT62(uStack_56,CONCAT11(uStack_57,local_58));
    uStack_88 = uStack_50;
    uVar9 = (ulong)CONCAT11(uStack_57,local_58) & 0xff;
    local_80 = local_48;
    uVar7 = uStack_50;
  }
  uVar10 = uVar9 >> 1;
  uVar8 = (uint)uVar9;
  uVar2 = uVar10;
  if ((uVar9 & 1) != 0) {
    uVar2 = uVar7;
  }
  if (uVar2 == 0) {
    uVar6 = 0;
  }
  else {
    pvVar3 = (void *)((ulong)&local_90 | 1);
    if ((uVar9 & 1) != 0) {
      pvVar3 = local_80;
    }
    FUN_03f6321c(&local_58,pvVar3);
    uVar6 = FUN_03f8d45c(&local_58,3,1,1,0,&local_34);
    if ((local_58 & 1) != 0) {
      operator_delete(local_48);
    }
    uVar10 = (ulong)((byte)local_90 >> 1);
    uVar8 = (uint)(byte)local_90;
    uVar7 = uStack_88;
  }
  uVar8 = uVar8 & 1;
  uVar9 = uVar10;
  if (uVar8 != 0) {
    uVar9 = uVar7;
  }
  if ((uVar9 == 0) || (local_34 != 0)) {
    FUN_03f8fb50(&local_58);
    FUN_03f6321c(&local_70,&UNK_01a5a060);
    FUN_03f678ec(&local_d0,&local_58,&local_70);
    if (((ulong)local_70 & 1) != 0) {
      operator_delete(local_60);
    }
    if ((local_58 & 1) != 0) {
      operator_delete(local_48);
    }
    uVar9 = (ulong)local_d0 >> 1 & 0x7f;
    if (((ulong)local_d0 & 1) != 0) {
      uVar9 = local_c8;
    }
    if (uVar9 != 0) {
      local_70 = (void *)((ulong)&local_d0 | 1);
      if (((ulong)local_d0 & 1) != 0) {
        local_70 = local_c0;
      }
      local_68 = uVar9;
      FUN_03f67944(&local_58,&local_70,&local_a0);
      if ((local_90 & 1) != 0) {
        operator_delete(local_80);
      }
      local_90 = CONCAT62(uStack_56,CONCAT11(uStack_57,local_58));
      uStack_88 = uStack_50;
      local_80 = local_48;
    }
    uVar9 = local_90 >> 1 & 0x7f;
    if ((local_90 & 1) != 0) {
      uVar9 = uStack_88;
    }
    if (uVar9 != 0) {
      pvVar3 = (void *)((ulong)&local_90 | 1);
      if ((local_90 & 1) != 0) {
        pvVar3 = local_80;
      }
      FUN_03f6321c(&local_58,pvVar3);
      uVar6 = FUN_03f8d45c(&local_58,3,1,1,0,&local_34);
      if ((local_58 & 1) != 0) {
        operator_delete(local_48);
      }
    }
    if (((ulong)local_d0 & 1) != 0) {
      operator_delete(local_c0);
    }
    uVar10 = (ulong)((byte)local_90 >> 1);
    uVar8 = (byte)local_90 & 1;
    uVar7 = uStack_88;
  }
  if (uVar8 != 0) {
    uVar10 = uVar7;
  }
  if ((uVar10 == 0) || (local_34 != 0)) {
    FUN_03f8fb50(&local_70);
    local_c8 = (ulong)local_70 >> 1 & 0x7f;
    local_d0 = (void *)((ulong)&local_70 | 1);
    if (((ulong)local_70 & 1) != 0) {
      local_c8 = local_68;
      local_d0 = local_60;
    }
    FUN_03f67944(&local_58,&local_d0,&local_a0);
    if ((local_90 & 1) != 0) {
      operator_delete(local_80);
    }
    local_90 = CONCAT62(uStack_56,CONCAT11(uStack_57,local_58));
    local_58 = 0;
    uStack_57 = 0;
    uStack_88 = uStack_50;
    local_80 = local_48;
    if (((ulong)local_70 & 1) != 0) {
      operator_delete(local_60);
    }
    pvVar3 = (void *)((ulong)&local_90 | 1);
    if ((local_90 & 1) != 0) {
      pvVar3 = local_80;
    }
    FUN_03f6321c(&local_58,pvVar3);
    uVar6 = FUN_03f8d45c(&local_58,3,1,1,0,&local_34);
    if ((local_58 & 1) != 0) {
      operator_delete(local_48);
    }
    if (local_34 != 0) {
      uVar11 = 0;
      goto LAB_03f93f90;
    }
  }
  DAT_09534ee0 = (undefined8 *)FUN_03f9197c(uVar6);
  iVar5 = FUN_03f8d778(uVar6,&local_34);
  FUN_03f8d6ac(uVar6,&local_34);
  if (local_34 == 0) {
    _DAT_09534f00 = DAT_09534ee0[1];
    uRam0000000009534ef8 = *DAT_09534ee0;
    uRam0000000009534f08 = DAT_09534ee0[2];
    if (((int)uRam0000000009534ef8 == 0x2d6d7973) && (DAT_09534f00 != 0)) {
      DAT_09534ee8 = DAT_09534ee0 + 3;
      lVar1 = (ulong)(uint)(DAT_09534f00 * 0x18) + 0x18;
      iRam0000000009534f68 = iVar5 - (int)lVar1;
      DAT_09534ef0 = (long)DAT_09534ee0 + lVar1;
      __s = (char *)thunk_FUN_03f8ef2c();
      FUN_03f6321c(&local_58,DAT_09534ef0 + (_DAT_09534f00 >> 0x20));
      if ((uRam0000000009534f10 & 1) != 0) {
        operator_delete(pvRam0000000009534f20);
      }
      bVar4 = local_58;
      uRam0000000009534f10 = CONCAT62(uStack_56,CONCAT11(uStack_57,local_58));
      uRam0000000009534f18 = uStack_50;
      pvRam0000000009534f20 = local_48;
      if (__s != (char *)0x0) {
        __n = strlen(__s);
        uVar9 = (ulong)(bVar4 >> 1);
        if ((bVar4 & 1) != 0) {
          uVar9 = uRam0000000009534f18;
        }
        if (__n == uVar9) {
          if (__n == 0xffffffffffffffff) {
            uVar6 = FUN_03f695e8(0x9534f10);
            if ((local_b8[0] & 1) != 0) {
              operator_delete(local_a8);
            }
            if ((local_90 & 1) != 0) {
              operator_delete(local_80);
            }
                    /* WARNING: Subroutine does not return */
            FUN_0404c2dc(uVar6);
          }
          pvVar3 = (void *)0x9534f11;
          if ((bVar4 & 1) != 0) {
            pvVar3 = pvRam0000000009534f20;
          }
          iVar5 = memcmp(pvVar3,__s,__n);
          if (iVar5 == 0) {
            free(__s);
            FUN_03f6321c(&local_58,DAT_09534ef0 + (uRam0000000009534f08 & 0xffffffff));
            if ((uRam0000000009534f28 & 1) != 0) {
              operator_delete(pvRam0000000009534f38);
            }
            uRam0000000009534f28 = CONCAT62(uStack_56,CONCAT11(uStack_57,local_58));
            uRam0000000009534f30 = uStack_50;
            pvRam0000000009534f38 = local_48;
            FUN_03f6321c(&local_58,DAT_09534ef0 + (uRam0000000009534f08 >> 0x20));
            if ((uRam0000000009534f40 & 1) != 0) {
              operator_delete(pvRam0000000009534f50);
            }
            uRam0000000009534f40 = CONCAT62(uStack_56,CONCAT11(uStack_57,local_58));
            uVar11 = 1;
            uRam0000000009534f48 = uStack_50;
            pvRam0000000009534f50 = local_48;
            DAT_09534f58 = *DAT_09534ee8;
            DAT_09534f60 = DAT_09534ee8[(ulong)(DAT_09534f00 - 1) * 3];
            goto LAB_03f93f90;
          }
        }
      }
      pvVar3 = (void *)0x9534f11;
      if ((bVar4 & 1) != 0) {
        pvVar3 = pvRam0000000009534f20;
      }
      FUN_03f917fc("Ignoring symbol file due to UUID mismatch. File contains %s but expected %s.",
                   pvVar3,__s);
      FUN_03f9198c(DAT_09534ee0);
      uVar11 = 0;
      DAT_09534ee0 = (undefined8 *)0x0;
      DAT_09534ee8 = (undefined8 *)0x0;
      DAT_09534ef0 = 0;
      goto LAB_03f93f90;
    }
    FUN_03f9198c();
  }
  else {
    FUN_03f9198c();
  }
  uVar11 = 0;
  DAT_09534ee0 = (undefined8 *)0x0;
LAB_03f93f90:
  if ((local_b8[0] & 1) != 0) {
    operator_delete(local_a8);
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  return uVar11;
}

